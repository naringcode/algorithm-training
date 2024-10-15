#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;

vector<string> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        vec.push_back(str.substr(i));
    }

    sort(vec.begin(), vec.end());

    for (string& elem : vec)
    {
        cout << elem << '\n';
    }

    return 0;
}
