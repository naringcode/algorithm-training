#include <bits/stdc++.h>

using namespace std;

string str;

int arr[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> str)
    {
        for (char ch : str)
        {
            if (' ' == ch)
                continue;

            arr[ch - 'a']++;
        }
    }

    std::vector<char> res;
    int mx = 0;

    for (int i = 0; i < 26; i++)
    {
        if (mx == arr[i])
        {
            res.push_back(i + 'a');
        }

        if (mx < arr[i])
        {
            mx = arr[i];

            res.clear();
            res.push_back(i + 'a');
        }
    }

    for (char ch : res)
    {
        cout << ch;
    }

    return 0;
}
