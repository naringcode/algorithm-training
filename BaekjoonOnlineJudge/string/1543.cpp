#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string strA;
string strB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, strA);
    getline(cin, strB);

    while (true)
    {
        size_t pos = strA.find(strB);

        if (pos == string::npos)
            break;

        strA = strA.substr(pos + strB.size());

        res++;
    }

    cout << res;

    return 0;
}
