#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char& ch : str)
    {
        vec.push_back(ch - '0');
    }
    
    sort(vec.begin(), vec.end(), greater<int>());

    for (int i : vec)
    {
        cout << i;
    }

    return 0;
}