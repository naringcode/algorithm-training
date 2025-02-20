#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int go(stringstream& ss)
{
    int ret = 0;
 
    int num;

    char ch;
    bool sub = false;

    while (ss >> num)
    {
        if (sub == false)
        {
            ret += num;
        }
        else // if (sub == true)
        {
            ret -= num;
        }

        if (!(ss >> ch)) // 끝에 도달
            return ret;

        if (ch == '-')
        {
            sub = true;
        }
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    stringstream ss{ str };

    cout << go(ss);

    return 0;
}