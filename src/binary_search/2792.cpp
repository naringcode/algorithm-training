#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll m;

ll low;
ll high;

ll mid;

ll arr[300'004];

ll res = 999'999'999'999; // 최소를 찾아야 하기 때문에 일단 최대로

// 질투심을 언제 올리고 내려야 하지?
// 질투심이 커지면 분배 안 됨 / 질투심이 작으면 분배 잘 됨

bool go(ll mid)
{
    ll bunbae = 0;

    for (ll i = 0; i < m; i++)
    {
        bunbae += arr[i] / mid; // 몫

        if (arr[i] % mid) // 나머지가 있으면 한 사람에게 몰아주기 가능
        {
            bunbae++;
        }
    }

    // 초과 분배가 일어나면 일단 통과
    return bunbae > n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];

        high = max(high, arr[i]);
    }

    low = 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (go(mid)) // 초과 분배가 일어나는 경우
        {
            low = mid + 1;
        }
        else // 딱 떨어져서 분배 가능하거나, 질투심이 너무 커서 모든 학생에게 분배 불가
        {
            res = min(res, mid); // 딱 떨어지면 일단 넣어

            high = mid - 1;
        }
    }

    cout << res;

    return 0;
}