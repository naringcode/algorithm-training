#include <bits/stdc++.h>

using namespace std;

// 위상 정렬
// : 어떠한 정점이 다른 점정과의 관계 속에서 가지는 위치
// - (진입 간선 indegree) -> (정점) -> (진출 간선 outdegree)
// - 정점인데 앞과 뒤가 있음.

// 알고리즘 조건
// - 그래프에 방향성이 있어야 함.
// - 그래프에 사이클이 없어야 함.
// -> 유향 비순환 그래프(Directed Acyclic Graph)의 형태에서 성립

// 알고리즘 형태
// 1. 그래프와 리스트 준비
// 2. 진입 간선이 없는 정점을 리스트에 추가
// 3. 해당 정점과 그것이 가지는 진출 간선을 그래프에서 제거
// 4. 2번과 3번을 반복해서 정점이 남지 않을 때까지 수행

// DFS를 사용한 위상 정렬 구현
// 1. 리스트와 그래프 준비
// 2. 진입 간선이 없는 정점을 대상으로 DFS 실행
// 3. 더 이상 탐색할 수 없는 정점에 도달했다면 해당 정점을 리스트의 새로운 헤더로 등록
// 4. 2번과 3번을 반복해서 정점이 남지 않을 때까지 수행

// 응용 문제) 백준 1005 : ACM Craft

int t;

int n;
int k;

int x;
int y;

int cost[1004];
int ans[1004];

vector<int> adj[1004];
int indegree[1004];

priority_queue<int> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n >> k;

        // 초기화
        for (int i = 1; i <= n; i++)
        {
            cost[i] = 0;
            ans[i] = 0;
            
            adj[i].clear();
            indegree[i] = 0;
        }

        // 입력
        for (int i = 1; i <= n; i++)
        {
            cin >> cost[i];
        }

        for (int i = 1; i <= k; i++)
        {
            cin >> x >> y;

            adj[x].push_back(y);
            indegree[y]++;
        }

        cin >> x;

        // go
        for (int i = 1; i <= n; i++)
        {
            if (0 == indegree[i])
            {
                ans[i] = cost[i];

                pq.push(i);
            }
        }

        while (pq.size() > 0)
        {
            int here = pq.top();
            pq.pop();

            for (int there : adj[here])
            {
                ans[there] = max(ans[there], ans[here] + cost[there]);
                
                indegree[there]--;

                if (0 == indegree[there])
                {
                    pq.push(there);
                }
            }
        }

        cout << ans[x] << '\n';
    }

    return 0;
}
