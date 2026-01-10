#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

string res;

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
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        res = "";

        set<char> chSet;
        for (char ch : str)
        {
            chSet.insert(ch);
        }

        bool flag = true;
        for (int i : views::iota(0, 26))
        {
            char ch = 'a' + i;

            if (chSet.contains(ch) == false)
            {
                res += ch;

                flag = false;
            }
        }

        if (flag == true)
        {
            println("pangram");
        }
        else
        {
            println("missing {}", res);
        }
    }

    return 0;
}
