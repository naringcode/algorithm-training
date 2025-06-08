#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
string str;

int arr[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    cin.ignore();

    while (t--)
    {
        getline(cin, str);

        ranges::fill(arr, 0);

        ranges::for_each(str, [](char ch) {
            if (ch == ' ')
                return;

            arr[ch - 'a']++;
        });

        auto mxIter = ranges::max_element(arr);
        int  mxCnt  = ranges::count(arr, *mxIter);

        if (mxCnt != 1)
        {
            println("?");
        }
        else
        {
            println("{}", (char)(distance(arr, mxIter) + 'a'));
        }
    }

    return 0;
}
