#include <bits/stdc++.h>
#include <span>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;

string strA;
string strB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
    cin >> n;
    cin >> strA;

    for (int i : views::iota(1, n))
    {
        cin >> strB;

        int temp = 0;
        int lenDiff = abs((int)strA.length() - (int)strB.length());

        for (char ch : views::iota('A', 'Z' + 1))
        {
            int cntA = count(strA.begin(), strA.end(), ch);
            int cntB = count(strB.begin(), strB.end(), ch);

            temp += abs(cntA - cntB);
        }

        if (lenDiff == 0)
        {
            if (temp == 0 || temp == 2)
            {
                res++;
            }
        }
        else if (lenDiff == 1)
        {
            if (temp == 1)
            {
                res++;
            }
        }
    }

    println("{}", res);

    return 0;
}
