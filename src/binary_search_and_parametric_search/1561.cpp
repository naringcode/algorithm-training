## 내 코드 & 모범 답안

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;
ll m;

ll arr[10'004];

ll l = 1;
ll r = 10'000LL * 30LL * 2'000'000'000LL + 4LL;

ll rightTime;

ll res;

// 만일 여러 개의 놀이기구가 동시에 비어 있으면, 더 작은 번호가 적혀 있는 놀이기구를 먼저 탑승한다고 한다.
//
// 잘못 이해했던 부분 : 
// 매 시간마다 한 명씩 탑승하는 것이 아니라 그 시간대에 탈 수 있으면 여러 명이 순차적으로 해당 시간에 탑승한다.
// queue처럼 시간마다 처리되는 내용인 줄 알았는데 아님.

// mid는 시간을 나타내며 아래 작업은 해당 시간에 놀이기구에 탈 수 있는 사람의 수를 구함
// 시간 안에 모두 태울 수 있는 지가 관건이다.
bool go(ll mid)
{
    ll cnt = m; // 최초 모두 탑승 상태

    // 출발(되돌아 오는 것 계산) / mid라는 시간 안에 arr[i]라는 놀이기구는 몇 명을 태울 수 있을까?
    for (ll i = 0; i < m; i++)
    {
        cnt += mid / arr[i];
    }

    return cnt >= n;
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
    }

    if (n <= m) // 예외 처리
    {
        cout << n;

        return 0;
    }

    while (l <= r)
    {
        ll mid = (l + r) / 2;

        if (go(mid)) // 해당 시간에 전부 탑승 가능 -> mid(시간)를 줄여볼까?
        {
            rightTime = mid;

            r = mid - 1;
        }
        else // 해당 시간에 전부 탑승 불가능 -> mid(시간)를 늘려볼까?
        {
            l = mid + 1;
        }

        // cout << l << " " << mid << " " << r << '\n';
    }

    // cout << rightTime;

    // 해당 시간에 걸치는 것을 알았으니 되감아서 그 전까지 탑승 가능한 인원 전부 파악
    rightTime--;

    res = m;
    
    for (ll i = 0; i < m; i++)
    {
        res += rightTime / arr[i];
    }

    rightTime++;

    // 해당 시간에 걸치게 되는 것 중 마지막에 탑승하는 아이가 존재
    for (ll i = 0; i < m; i++)
    {
        // 놀이기구가 돌아와서 탈 수 있는 상태
        if (0 == rightTime % arr[i])
        {
            res++;

            if (n == res)
            {
                res = i + 1; // 놀이기구는 1번부터 시작한다.

                break;
            }
        }
    }

    cout << res;

    return 0;
}