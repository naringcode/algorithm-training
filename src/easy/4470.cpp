#include <bits/stdc++.h>

using namespace std;

int n;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        
        cout << i + 1 << ". " << str << '\n'; 
    }

    return 0;
}