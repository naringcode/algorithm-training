#include <bits/stdc++.h>

using namespace std;

string str;
string estr;

vector<char> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;
    cin >> estr;

    for (char elem : str)
    {
        vec.push_back(elem);

        while (vec.back() == estr.back())
        {
            if (vec.size() < estr.size())
                break;

            bool chk = true;

            int idx = vec.size() - estr.size();

            for (int i = 0; i < estr.size(); i++)
            {
                if (vec[idx + i] != estr[i])
                {
                    chk = false;

                    break;
                }
            }

            if (true == chk)
            {
                for (int i = 0; i < estr.size(); i++)
                {
                    vec.pop_back();
                }
            }
            else
            {
                break;
            }
        }
    }

    if (vec.size())
    {
        vec.push_back('\0');

        cout << vec.data();
    }
    else
    {
        cout << "FRULA";
    }

    return 0;
}
