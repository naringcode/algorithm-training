#include <bits/stdc++.h>

using namespace std;

// 펜윅트리
// - 각 노드는 부분합을 저장함.
// - 각 노드는 인덱스의 최하위 비트를 뺀 값에 해당하는 이전 노드와 연결됨.
// - 업데이트 함수와 쿼리 함수로 구성하는 것이 일반적임.

// 최하위 비트를 구하는 공식
// : (idx & -idx)

// - 각 노드는 해당 노드의 인덱스가 가진 최하위 비트를 뺀


// - 각 노드는 해당 노드의 오른쪽에 있는 비트(최하위 비트)를 뺀
// : 업데이트 함수와 쿼리 함수로 구성되어 있음

int n;
int m;
int k;

int a;
int b;
int64_t c;

int64_t arr[1'000'004];
int64_t tree[1'000'004];

void update(int idx, int64_t amount)
{
    while (idx <= n)
    {
        tree[idx] += amount;
        idx += (idx & -idx);
    }
}

int64_t sum(int idx)
{
    int64_t ret = 0;

    while (0 != idx)
    {
        ret += tree[idx];
        idx -= (idx & -idx);
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        update(i, arr[i]);
    }

    for (int i = 0; i < m + k; i++)
    {
        cin >> a >> b >> c;

        if (1 == a)
        {
            int64_t amount = c - arr[b];
            arr[b] = c;

            update(b, amount);
        }
        else if (2 == a)
        {
            cout << sum(c) - sum(b - 1) << '\n';
        }
    }

    return 0;
}
