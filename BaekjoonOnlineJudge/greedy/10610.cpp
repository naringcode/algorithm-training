#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
string conv;

ll res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    sort(str.begin(), str.end(), greater{ });

    conv = str;
    std::transform(conv.begin(), conv.end(), conv.begin(), [](char ch) { return ch - '0'; });
    
    res = std::accumulate(conv.begin(), conv.end(), 0);

    if (str.back() == '0' && res % 3 == 0)
    {
        cout << str;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
