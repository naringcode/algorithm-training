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

    while (n--)
    {
        cin >> str;

        if ("P=NP" == str)
        {
            cout << "skipped\n";

            continue;
        }

        auto pos = str.find('+');

        string sub1 = str.substr(0, pos);
        string sub2 = str.substr(pos + 1);

        cout << stoi(sub1.data()) + stoi(sub2.data()) << '\n';
    }

    return 0;
}
