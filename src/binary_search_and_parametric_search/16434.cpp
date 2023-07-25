#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll t[124'000];
ll a[124'000];
ll h[124'000];

ll l;
ll r = 130'000'000'000'000'000; // 123'456 * 1'000'000(몬스터 공격력) * 1'000'000(용사 공격력이 1일 때 최대로 때리는 경우)

ll atk;

ll res = r;

// 죽지 않는 방법을 결정해야 한다.
// 살았으면 true, 죽었으면 false
bool go(ll maxHP, ll atk)
{
    ll curHP = maxHP;

    for (int i = 0; i < n; i++)
    {
        if (2 == t[i])
        {
            atk += a[i];

            curHP = min(curHP + h[i], maxHP);
        }
        else
        {
            // 얼마나 때려야 몬스터가 죽는가
            ll heroAtkCnt = h[i] / atk;

            if (h[i] % atk)
            {
                heroAtkCnt++;
            }

            // 얼마나 많은 체력이 닳게 될 것인가
            curHP -= (heroAtkCnt - 1) * a[i];

            if (curHP <= 0)
                return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> atk;

    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> a[i] >> h[i];
    }

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        if (go(mid, atk)) // 살았다 -> HP를 줄여볼까?
        {
            // res = min(res, mid);

            r = mid - 1;
        }
        else // 죽었다 -> HP를 늘려볼까?
        {
            l = mid + 1;
        }
    }

    // cout << res;
    cout << r + 1;

    return 0;
}