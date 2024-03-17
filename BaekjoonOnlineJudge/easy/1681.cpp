#include <bits/stdc++.h>

using namespace std;

int n;
int l;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            res++;

            string str = to_string(res);

            if (string::npos == str.find(l + '0'))
                break;
        }
    }

    cout << res;

    return 0;
}
