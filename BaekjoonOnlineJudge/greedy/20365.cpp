#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
string str;

int reds;
int blues;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    char curr = 'X';

    for (char ch : str)
    {
        if (curr != ch)
        {
            curr = ch;

            if (curr == 'R')
            {
                reds++;
            }
            else
            {
                blues++;                
            }
        }
    }

    println("{}", min(reds, blues) + 1);

    return 0;
}
