#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string strTemp;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> strTemp)
    {
        str += strTemp;
    }

    for (auto elem : views::split(str, ","sv))
    {
        int num = atoi(std::string_view(elem).data());

        res += num;
    }

    println("{}", res);

    return 0;
}
