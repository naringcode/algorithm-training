#include <bits/stdc++.h>

using namespace std;

int n;

int arr[3];

// 3차원 구조를 떠올리면 더 헷갈린다(틀에 박힌 생각 ㄴㄴ 그냥 운영체제에서 메모리를 처리하는 방법만 떠올리자).
// 그냥 고유한 상태 3개를 독립적으로 처리한다고 생각하자.
int visited[64][64][64];

vector<int> permu;
vector<vector<int>> permuList;

int dmg[3] = { 9, 3, 1 };

int cntcnt;

int go()
{
    queue<tuple<int, int, int>> q;

    int hp[3];
    int nextHp[3] = { 0, 0, 0 };

    q.push({ arr[0], arr[1], arr[2] });

    while (q.size())
    {
        tie(hp[0], hp[1], hp[2]) = q.front();

        q.pop();

        for (auto& thisPermu : permuList)
        {
            for (int i = 0; i < n; i++)
            {
                nextHp[i] = max(0, hp[i] - dmg[thisPermu[i]]);
            }

            // cntcnt++;

            // 너비우선탐색이기 때문에 추후 방문한 노드는 깊이가 더 깊다.
            if (visited[nextHp[0]][nextHp[1]][nextHp[2]])
                continue;

            visited[nextHp[0]][nextHp[1]][nextHp[2]] = visited[hp[0]][hp[1]][hp[2]] + 1;

            q.push({ nextHp[0], nextHp[1], nextHp[2] });

        }

        if (visited[0][0][0])
            break;
    }

    // cout << cntcnt << ' ' << q.size() << '\n';

    return visited[0][0][0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        permu.push_back(i);
    }

    do
    {
        permuList.push_back(permu);
    } while (next_permutation(permu.begin(), permu.end()));

    cout << go();

    return 0;
}
