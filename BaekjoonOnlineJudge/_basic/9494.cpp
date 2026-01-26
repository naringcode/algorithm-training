#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

vector<string> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        vec.clear();
        res = 0;

        cin >> n;
        cin.ignore();
        if (n == 0)
            break;

        while (n--)
        {
            string temp;
            getline(cin, temp);
            
            vec.push_back(temp);
        }

        for (string str : vec)
        {
            if (res > str.length())
                continue;

            while (str[res] != ' ' && str[res] != '\0')
            {
                res++;
            }
        }

        println("{}", res + 1);
    }

    return 0;
}
