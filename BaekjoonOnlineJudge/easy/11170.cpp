#include <bits/stdc++.h>

using namespace std;

int n;

int arr[1'000'004];

int a;
int b;

void init()
{
    for (int i = 0; i <= 1'000'000; i++)
    {
        string str = to_string(i);

        arr[i] = count(str.begin(), str.end(), '0');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    init();

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        int res = 0;

        for (int i = a; i <= b; i++)
        {
            res += arr[i];
        }

        cout << res << '\n';
    }

    return 0;
}
