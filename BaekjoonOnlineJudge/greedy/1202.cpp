#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

pair<ll, ll> jewels[300'004];
ll bags[300'004];

priority_queue<ll> pq;

ll res;

// 보석은 총 n개, 각 보석은 무게 m과 가격 v를 가지고 있다.
// 가방 k개가 있고 각 가방에 담을 수 있는 최대 무게는 c이다.
// 가방에는 최대 한 개의 보석만 넣을 수 있다.
//
// => 훔칠 수 있는 보석의 최대 가격 구하기

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        // 무게, 가격
        cin >> jewels[i].first >> jewels[i].second;
    }

    for (int i = 0; i < k; i++)
    {
        cin >> bags[i];
    }

    sort(jewels, jewels + n);
    sort(bags, bags + k);

    int idx = 0;

    for (int i = 0; i < k; i++)
    {
        // 허용 무게까지 일단 담고
        while (idx < n && bags[i] >= jewels[idx].first)
        {
            pq.push(jewels[idx].second);

            idx++;
        }

        // 가능한 것 중 가장 가치있는 것을 찾아서 뽑기
        if (pq.size())
        {
            res += pq.top();

            pq.pop();
        }
    }

    cout << res;

    return 0;
}