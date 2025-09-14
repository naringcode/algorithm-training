#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// bellman-ford (최소 거리 탐색 도중 음의 가중치가 있음 경우 사용하며, 음의 사이클을 검증할 수 있음)
// : 하나의 출발 노드에서 다른 모든 노드까지의 최단 거리를 구하기 위해 사용하는 알고리즘

// 다익스트라가 최소 비용의 노드를 기반으로 탐색하였다면, 벨만-포드는 모든 간선을 (V - 1)번 확인하는 것이 핵심이다.
// 알고리즘을 작성할 때 다익스트라는 "최소 비용 노드"에 초점을 맞춰서, 벨만-포드는 "간선 정보"에 초점을 맞춰서 진행하면 된다.
//
// 다익스트라는 최단 거리가 확정된 정점을 기준으로 확장하는 방식이라 우선순위 큐를 사용할 수 있기에 O(ElogV)의 시간복잡도를 보이지만,
// 벨만-포드는 모든 간선을 (V - 1)번 완전 탐색해야 하기에 O(VE)의 시간복잡도를 보인다.

// 모든 간선을 (V - 1)번 반복하여 계산하는 작업을 거치는 이유는 이게 모든 노드의 정보를 갱신하기 위한 최소 횟수이기 때문에 그런 것이다.
// 최단 경로는 절대 사이클을 포함하지 않고, 어떠한 최단 경로도 최대 V - 1개의 간선만 거친다는 특성을 이용한 것이다.
// 조금 쉽게 생각해서 매 연산마다 최단 경로가 1개씩 확정된다고 생각하면 된다.
// 주의 1 : 간선의 수만큼 돌면 안 된다(양방향 간선이 아님).
// 주의 2 : 그래프 간선의 수는 최단 경로를 형성하는 경로의 깊이와 관련이 없다.
//
// INF       INF        0
// (A) <---- (B) <---- (C)
//       -1        -2
//
// 다음과 같이 3개의 정점과 2개의 간선이 있다고 가정한 다음, 시작 노드를 C로 하자.
// 이때 C -> B, B -> A 순서로 순회한다고 하면 다음과 같이 갱신될 것이다.
// 
// 첫 번째 순회
// INF       -2         0
// (A) <---- (B) <---- (C)
//       -1        -2
//
// 두 번째 순회
// -3        -2         0
// (A) <---- (B) <---- (C)
//       -1        -2

// 1. 각 노드는 { 최소 비용, 직전 노드 }의 형태로 되어 있다.
// - 다익스트라와 유사하게 최단 경로를 복원할 생각이 없으면 직전 노드는 생략할 수 있음.
// 2. 최소 비용과 직전 노드의 초깃값은 INF이다(테이블 초기화).
// 3. 시작 노드를 설정하고 해당 노드의 최소 비용은 0으로, 직전 노드는 자기 자신으로 한다.
// 4. 아래 5 ~ 6 과정을 (V - 1)회 반복한다.
// 5. 모든 간선을 순회하여 각 간선(from -> to)을 거쳐 다른 노드로 가는 비용을 계산한다(특정 정점의 간선을 순회하는 것이 아님). 
// 6. 만약 간선(from -> to)을 거쳤을 경우의 비용이 훨씬 저렴하다면 최소 비용과 직전 노드를 계산하고 있는 간선의 to 노드에 맞춰 갱신한다.
// 
// 위 작업이 전부 끝난 상태에서 음의 사이클이 발생하는지 확인하고자 한다면?
// 5 ~ 6 과정을 한 번 더 반복하여 갱신 여부를 조회하면 된다.
// 만약 갱신이 추가적으로 가능한 상태라면 음의 사이클이 발생한 것이다.

void Case01()
{
    const int INF = 999'999'999;
    
    int numVertices = 5;
    int start = 0;

    // from, to, weight
    // vector<pair<int, int>> adjs[N];
    // vector<vector<int, int>> adjs(N); 
    vector<tuple<int, int, int>> edges; // 위 2가지 자료형도 사용 가능한 형태임.
    edges.push_back({ 0, 1, 4 });
    edges.push_back({ 0, 2, 3 });
    edges.push_back({ 0, 4, -6 });
    edges.push_back({ 1, 3, 5 });
    edges.push_back({ 2, 1, 2 });
    edges.push_back({ 3, 0, 7 });
    edges.push_back({ 3, 2, 4 });
    edges.push_back({ 4, 2, 2 });

    vector<int> minCosts(numVertices, INF);
    minCosts[start] = 0;

    for (int i = 0; i < numVertices - 1; i++)
    {
        for (auto [from, to, weight] : edges)
        {
            // 도달 불가능한, 아직까지 도달하지 못 한 정점은 제외한다.
            // 이 코드를 적용하지 않으면 INF 값에 따라 오버플로우가 발생할 가능성이 생긴다.
            if (minCosts[from] == INF)
                continue;

            if (minCosts[from] + weight < minCosts[to])
            {
                minCosts[to] = minCosts[from] + weight;
            }

            // 위 코드와 기능이 같다.
            // minCosts[to] = min(minCosts[to], minCosts[from] + weight);
        }
    }

    // 음의 사이클 확인
    for (auto [from, to, weight] : edges)
    {
        if (minCosts[from] == INF)
            continue;

        if (minCosts[from] + weight < minCosts[to])
        {
            println("negative cycle");

            return;
        }
    }

    // start부터 각 노드까지의 거리
    for (int i = 0; i < numVertices; i++)
    {
        println("{}", minCosts[i]);
    }
}

void Case02()
{
    const int INF = 999'999'999;
    
    int numVertices = 4;
    int start = 0;

    // from, to, weight
    // vector<pair<int, int>> adjs[N];
    // vector<vector<int, int>> adjs(N); 
    vector<tuple<int, int, int>> edges; // 위 2가지 자료형도 사용 가능한 형태임.
    edges.push_back({ 0, 1, 5 });
    edges.push_back({ 0, 2, -1 });
    edges.push_back({ 1, 2, 2 });
    edges.push_back({ 2, 3, -2 });
    edges.push_back({ 3, 0, 2 });
    edges.push_back({ 3, 1, 6 });

    vector<int> minCosts(numVertices, INF);
    minCosts[start] = 0;

    for (int i = 0; i < numVertices - 1; i++)
    {
        for (auto [from, to, weight] : edges)
        {
            // 도달 불가능한, 아직까지 도달하지 못 한 정점은 제외한다.
            // 이 코드를 적용하지 않으면 INF 값에 따라 오버플로우가 발생할 가능성이 생긴다.
            if (minCosts[from] == INF)
                continue;

            if (minCosts[from] + weight < minCosts[to])
            {
                minCosts[to] = minCosts[from] + weight;
            }

            // 위 코드와 기능이 같다.
            // minCosts[to] = min(minCosts[to], minCosts[from] + weight);
        }
    }

    // 음의 사이클 확인
    for (auto [from, to, weight] : edges)
    {
        if (minCosts[from] == INF)
            continue;

        if (minCosts[from] + weight < minCosts[to])
        {
            println("negative cycle");

            return;
        }
    }

    // start부터 각 노드까지의 거리
    for (int i = 0; i < numVertices; i++)
    {
        println("{}", minCosts[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // Case01();
    Case02();

    return 0;
}
