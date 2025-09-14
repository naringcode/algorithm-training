#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// dijkstra

// 1. 각 노드는 { 최소 비용, 직전 노드 }의 형태로 되어 있다.
// 2. 최소 비용과 직전 노드의 초깃값은 INF이다.
// 3. 시작 노드를 설정하고 해당 노드의 최소 비용은 0으로, 직전 노드는 자기 자신으로 한다.
// 4. 아직 방문하지 않은 노드 중, 현재까지의 거리를 합산했을 때 최소 비용이 가장 적은 노드를 선택한다(최초는 시작 노드임).
// 5. 선택한 노드의 간선을 거치는 노드를 탐색하여, 간선을 거쳤을 경우의 비용과 해당 노드의 최소 비용(초깃값은 INF)을 비교한다.
// 6. 만약 간선을 거쳤을 경우의 비용이 훨씬 저렴할 경우 최소 비용과 직전 노드를 탐색을 진행하고 있는 현재 노드 기준으로 갱신한다.
// 7. 모든 노드를 방문할 때까지 4번 과정을 반복한다.
//
// 반드시 이렇게 작성할 필요는 없지만 이러한 흐름을 거치게끔 코드를 작성해야 한다.

// 주의 : 다익스트라 알고리즘은 음의 가중치가 없을 경우에만 사용해야 한다(음의 가중치가 있을 경우는 벨만-포드를 사용해야 함).

// 우선순위 큐를 사용하여 최소 비용을 가져오는 방식

void Case01()
{
    int INF = 999'999'999;

    int numNodes = 3;
    int start = 0;

    // to, weight
    vector<vector<pair<int, int>>> adjs(numNodes);
    
    vector<int> minCosts(numNodes, INF);
    vector<int> parents(numNodes, INF);
    
    adjs[0].push_back({ 1, 9 });
    adjs[0].push_back({ 2, 3 });
    adjs[1].push_back({ 0, 5 });
    adjs[2].push_back({ 1, 1 });
    
    vector<bool> visited(numNodes, false);

    // 비용, 노드
    priority_queue<pair<int, int>> pq;
    
    minCosts[start] = 0;
    parents[start] = start;

    pq.push({ 0, start });

    while (pq.size() > 0)
    {
        auto [dist, here] = pq.top();
        pq.pop();

        dist = -dist; // 음수로 넣은 값 복원

        // if (visited[here] == true)
        //     continue;
        // 
        // visited[here] = true;

        // here에 대한 dist인 minCosts[here]가 갱신되어 [dist, here]의 정보가 더는 유효하지 않은 상황
        // minCosts[here]과 dist가 일치해야 우선순위 큐에 넣었을 당시 정보를 사용하는 것이다.
        if (minCosts[here] != dist)
            continue;

        for (auto [there, weight] : adjs[here])
        {
            if (minCosts[here] + weight < minCosts[there])
            {
                minCosts[there] = minCosts[here] + weight;
                parents[there] = here;

                // 우선순위 큐의 특성을 이용하기 위해 이동 거리는 음수값으로 넣는다.
                pq.push({ -minCosts[there], there });
            }
        }
    }

    // start부터 각 노드까지의 거리
    for (int i = 0; i < numNodes; i++)
    {
        println("{}", minCosts[i]);
    }
}

void Case02()
{
    int INF = 999'999'999;

    int numNodes = 5;
    int start = 0;

    // to, weight
    vector<vector<pair<int, int>>> adjs(numNodes);
    
    vector<int> minCosts(numNodes, INF);
    vector<int> parents(numNodes, INF);
    
    adjs[0].push_back({ 1, 4 });
    adjs[0].push_back({ 2, 4 });
    adjs[0].push_back({ 4, 1 });
    adjs[1].push_back({ 2, 6 });
    adjs[2].push_back({ 3, 8 });
    adjs[3].push_back({ 1, 5 });
    adjs[3].push_back({ 1, 2 });
    adjs[4].push_back({ 2, 2 });
    
    vector<bool> visited(numNodes, false);

    // 비용, 노드
    priority_queue<pair<int, int>> pq;
    
    minCosts[start] = 0;
    parents[start] = start;

    pq.push({ 0, start });

    while (pq.size() > 0)
    {
        auto [dist, here] = pq.top();
        pq.pop();

        dist = -dist; // 음수로 넣은 값 복원

        // if (visited[here] == true)
        //     continue;
        // 
        // visited[here] = true;

        // here에 대한 dist인 minCosts[here]가 갱신되어 [dist, here]의 정보가 더는 유효하지 않은 상황
        // minCosts[here]과 dist가 일치해야 우선순위 큐에 넣었을 당시 정보를 사용하는 것이다.
        if (minCosts[here] != dist)
            continue;

        for (auto [there, weight] : adjs[here])
        {
            if (minCosts[here] + weight < minCosts[there])
            {
                minCosts[there] = minCosts[here] + weight;
                parents[there] = here;

                // 우선순위 큐의 특성을 이용하기 위해 이동 거리는 음수값으로 넣는다.
                pq.push({ -minCosts[there], there });
            }
        }
    }

    // start부터 각 노드까지의 거리
    for (int i = 0; i < numNodes; i++)
    {
        println("{}", minCosts[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Case01();
    // Case02();

    return 0;
}
