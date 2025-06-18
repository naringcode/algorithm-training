#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (getline(cin, str))
    {
        auto convView = str | views::transform([](char ch) {
            if (ch == 'i')
            {
                return 'e';
            }
            else if (ch == 'e')
            {
                return 'i';
            }
            else if (ch == 'I')
            {
                return 'E';
            }
            else if (ch == 'E')
            {
                return 'I';
            }

            return ch;
        });

        str = ranges::to<string>(convView);

        println("{}", str);
    }

    return 0;
}
