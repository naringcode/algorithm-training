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

const int INF = 999'999'999;
const int MAX_NODES = 100;

int graph[MAX_NODES][MAX_NODES]; // [from, to] = weight
bool visited[MAX_NODES];

// 모든 노드를 탐색해서 최소 비용을 탐색하는 방식

void Case01()
{
    for (int i = 0; i < MAX_NODES; i++)
    {
        ranges::fill(graph[i], INF);
    }

    ranges::fill(visited, false);
 
    // info
    int numNodes = 3;
    int start = 0;

    graph[0][1] = 9;
    graph[0][2] = 3;
    graph[1][0] = 5;
    graph[2][1] = 1;
    
    // go
    vector<int> distances(numNodes, INF);

    distances[start] = 0;

    for (int i = 0; i < numNodes - 1; i++)
    {
        int minDist = INF;
        int closest = -1; // parentNode

        // 최소 거리 노드 찾기
        for (int j = 0; j < numNodes; j++)
        {
            if (visited[j])
                continue;

            if (distances[j] < minDist)
            {
                minDist = distances[j];
                closest = j;
            }
        }

        // 최소 거리에 있는 노드 방문
        visited[closest] = true;

        // 해당 노드의 주변 노드 갱신
        for (int j = 0; j < numNodes; j++)
        {
            // 이미 방문했거나 인접한 노드가 아닌 경우 무시
            if (visited[j] || graph[closest][j] == INF)
                continue;

            int minDist = distances[closest] + graph[closest][j];

            if (minDist < distances[j])
            {
                distances[j] = minDist;
            }
        }
    }

    // start부터 각 노드까지의 거리
    for (int i = 0; i < numNodes; i++)
    {
        println("{}", distances[i]);
    }
}

void Case02()
{
    for (int i = 0; i < MAX_NODES; i++)
    {
        ranges::fill(graph[i], INF);
    }

    ranges::fill(visited, false);
 
    // info
    int numNodes = 5;
    int start = 0;

    graph[0][1] = 4;
    graph[0][2] = 4;
    graph[0][4] = 1;
    graph[1][2] = 6;
    graph[2][3] = 8;
    graph[3][1] = 5;
    graph[3][1] = 2;
    graph[4][2] = 2;
    
    // go
    vector<int> distances(numNodes, INF);

    distances[start] = 0;

    for (int i = 0; i < numNodes - 1; i++)
    {
        int minDist = INF;
        int closest = -1; // parentNode

        // 최소 거리 노드 찾기
        for (int j = 0; j < numNodes; j++)
        {
            if (visited[j])
                continue;

            if (distances[j] < minDist)
            {
                minDist = distances[j];
                closest = j;
            }
        }

        // 최소 거리에 있는 노드 방문
        visited[closest] = true;

        // 해당 노드의 주변 노드 갱신
        for (int j = 0; j < numNodes; j++)
        {
            // 이미 방문했거나 인접한 노드가 아닌 경우 무시
            if (visited[j] || graph[closest][j] == INF)
                continue;

            int minDist = distances[closest] + graph[closest][j];

            if (minDist < distances[j])
            {
                distances[j] = minDist;
            }
        }
    }

    // start부터 각 노드까지의 거리
    for (int i = 0; i < numNodes; i++)
    {
        println("{}", distances[i]);
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
