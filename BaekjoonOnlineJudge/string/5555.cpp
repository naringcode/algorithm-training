#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    cin >> n;

    while (n--)
    {
        string temp;
        cin >> temp;

        temp = temp + temp;

        if (temp.find(str) != string::npos)
        {
            res++;
        }
    }

    println("{}", res);
   
    return 0;
}
