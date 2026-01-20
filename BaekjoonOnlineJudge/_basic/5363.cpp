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
    cin.ignore();

    while (n--)
    {
        getline(cin, str);
        vec = ranges::to<vector<string>>(str | views::split(' '));
        
        for (int idx : views::iota(2, ssize(vec)))
        {
            print("{} ", vec[idx]);
        }

        println("{} {}", vec[0], vec[1]);
    }

    return 0;
}
