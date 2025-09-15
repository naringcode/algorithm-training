#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// floyd-warshall (모든 쌍 최단 거리 탐색 알고리즘)
// 다익스트라나 벨만-포드는 특정 지점에서 다른 지점으로 가는데 필요한 최소 비용을 계산하기 위해 사용했다면,
// 플로이드-워셜은 모든 지점에서 다른 모든 지점까지의 최단 거리를 계산하기 위해 사용한다.
// from -> to가 아닌 { 모든 노드 } -> { 모든 노드 }라는 의미이다.

// 플로이드-워셜을 계산하기 전에 최초 거리 테이블은 INF로 초기화해야 한다(단, 자기 자신은 0으로 초기화해야 함).
// 해당 알고리즘의 시간복잡도는 O(V^3)이고, 점화식은 Dij = min(Dij, Dik + Dkj)이다.
// 실제 알고리즘을 계산할 때는 k -> i -> j 순서로 for 문을 감싸서 계산한다고 숙지하면 된다.
//
// for (int k = 0; k < n; k++)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//         }
//     }
// }
//
// i -> j까지 가는 경로 중 k를 거쳤을 경우 더 빠른 길이 무엇인지 탐색하는 것이라고 보면 된다.
// 각 dist 배열의 원소에 담기는 내용은 "dist[from][to] = weight"라 생각하면 된다.

// https://www.acmicpc.net/problem/11404

int n;
int m;

int from;
int to;
int weight;

const int INF = 999'999'999;
int dist[104][104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        for (int j : views::iota(0, n))
        {
            // dist[i][j] = (i == j) ? 0 : INF;
            dist[i][j] = INF;
        }
    }

    for (int i : views::iota(0, m))
    {
        cin >> from >> to >> weight;

        from--;
        to--;

        dist[from][to] = min(dist[from][to], weight);
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || dist[i][j] == INF)
            {
                print("0 ");
            }
            else
            {
                print("{} ", dist[i][j]);
            }
        }

        println("");
    }

    return 0;
}
