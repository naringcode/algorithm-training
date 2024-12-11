#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

string str;
vector<string> vec;

void go()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            string a = vec[i] + vec[j];
            string b = a;

            reverse(b.begin(), b.end());

            if (a == b)
            {
                cout << a << '\n';

                return;
            }
        }
    }

    cout << 0 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        vec.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> str;

            vec.push_back(str);
        }

        go();
    }

    return 0;
}
