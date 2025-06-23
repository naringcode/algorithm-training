#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

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

        auto myView = str | views::split(' ') | views::drop(1);

        print("god");
        
        for (const auto& elem : myView)
        {
            print("{}", ranges::to<string>(elem));
        }

        println();
    }

    return 0;
}
