#include <bits/stdc++.h>

using namespace std;

string str;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= 100'000; i++)
    {
        str += to_string(i);
    }

    size_t idx = str.find(to_string(n));

    cout << idx + 1;

    return 0;
}
