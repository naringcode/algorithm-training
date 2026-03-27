#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;
int dif;

vector<pair<int, string>> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> str >> dif;

        vec.push_back({ dif, str });
    }

    ranges::sort(vec);

    println("{}", vec[0].second);

    return 0;
}
