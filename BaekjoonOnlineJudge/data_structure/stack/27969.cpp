#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;

vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);

    vec.push_back(0);

    for (int idx = 0; idx < str.length(); idx++)
    {
        char ch = str[idx];

        if (ch == '[')
        {
            vec.push_back(0);
        }
        else if (ch == ']')
        {
            int temp = vec.back();
            vec.pop_back();

            vec.back() += temp + 8;
        }
        else
        {
            if (ch >= '0' && ch <= '9')
            {
                while (true)
                {
                    idx++;
                    char newCh = str[idx];

                    if (newCh >= '0' && newCh <= '9')
                        continue;

                    break;
                }

                vec.back() += 8;
            }
            else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {
                int cnt = 1;

                while (true)
                {
                    idx++;
                    char newCh = str[idx];

                    if ((newCh >= 'A' && newCh <= 'Z') || (newCh >= 'a' && newCh <= 'z'))
                    {
                        cnt++;

                        continue;
                    }

                    break;
                }

                vec.back() += (cnt + 12);
            }
        }
    }

    cout << vec.back();

    return 0;
}
