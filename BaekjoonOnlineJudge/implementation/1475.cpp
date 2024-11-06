#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;

int cnt[10];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        int num = ch - '0';

        cnt[num]++;
    }

    cnt[6] += cnt[9];
    cnt[9] = 0;

    int carry = cnt[6] % 2;

    cnt[6] /= 2;
    cnt[6] += carry;

    cout << *max_element(cnt, cnt + 10);

    return 0;
}
