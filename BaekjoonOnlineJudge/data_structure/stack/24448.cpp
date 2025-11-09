#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
vector<string> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str;
        
        if (str == "READ")
        {
            println("{}", vec.back());

            vec.pop_back();
        }
        else
        {
            vec.push_back(str);
        }
    }

    return 0;
}
