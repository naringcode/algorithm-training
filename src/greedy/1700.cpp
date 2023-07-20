#include <bits/stdc++.h>

using namespace std;

int n;
int k;

int temp;

int  order[104];

vector<int> nxt[104];

bool plug[104];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    int cnt = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> order[i];

        nxt[order[i]].push_back(i);

        // 최초 플러깅
        if (cnt < n && false == plug[order[i]])
        {
            plug[order[i]] = true;

            cnt++;
        }
    }

    if (cnt < n)
    {
        cout << 0;

        return 0;
    }

    for (int i = 0; i < k; i++)
    {
        reverse(nxt[i].begin(), nxt[i].end());
    }

    // 시뮬레이션 시작
    for (int i = 0; i < k; i++)
    {
        // 시간, 인덱스
        priority_queue<pair<int, int>> pq;

        // 자기 차례인데 꽂혀 있는 경우
        if (true == plug[order[i]])
        {
            nxt[order[i]].pop_back();

            continue;
        }

        // 뽑혀야 하는 것이 무엇인고
        for (int i = 1; i <= k; i++)
        {
            if (true == plug[i])
            {
                int price = 10000; // 이후 대기열이 없으면 우선적으로 뽑아야 함

                if (nxt[i].size())
                {
                    price = nxt[i].back();
                }

                pq.push({ price, i });
            }
        }

        int rmv = pq.top().second;

        plug[rmv] = false;

        plug[order[i]] = true;

        nxt[order[i]].pop_back();

        res++;
    }

    cout << res;

    return 0;
}