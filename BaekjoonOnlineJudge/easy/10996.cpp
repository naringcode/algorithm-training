#include <bits/stdc++.h>

using namespace std;

int n;

vector<string> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (1 == n)
    {
        cout << '*';

        return 0;
    }

    string strA = "";
    string strB = "";

    for (int i = 0; i < n; i++)
    {
        if (0 == i % 2)
        {
            strA += "* ";
        }
        else
        {
            strB += " *";
        }
    }

    for (int i = 0; i < n; i++)
    {
        res.push_back(strA);
        res.push_back(strB);
    }

    for (auto& elem : res)
    {
        cout << elem << '\n';
    }

    return 0;
}
