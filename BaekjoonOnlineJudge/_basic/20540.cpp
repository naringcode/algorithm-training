#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
string res;

map<char, char> mp {
    { 'E', 'I' },
    { 'I', 'E' },
    { 'S', 'N' },
    { 'N', 'S' },
    { 'T', 'F' },
    { 'F', 'T' },
    { 'J', 'P' },
    { 'P', 'J' },
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> str;

    for (char ch : str)
    {
        res += mp[ch];
    }

    println("{}", res);

    return 0;
}
