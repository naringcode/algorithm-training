#include <bits/stdc++.h>

using namespace std;

int n;
string strA;
string strB;

std::vector<pair<string, string>> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n;

        if (0 == n)
            break;

        vec.clear();

        while (n--)
        {
            cin >> strA;
            strB = strA;

            transform(strA.begin(), strA.end(), strA.begin(), ::toupper);

            vec.push_back({ strA, strB });
        }

        sort(vec.begin(), vec.end());

        cout << vec[0].second << '\n';
    }

    return 0;
}
