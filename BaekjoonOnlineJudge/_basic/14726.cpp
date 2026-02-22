#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

string str;
int sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> str;

        sum = 0;

        for (int num : str | views::reverse | views::drop(1) | views::stride(2) | views::transform([](char ch) { return (int)(ch - '0'); }))
        {
            num *= 2;

            if (num >= 10)
            {
                num = num / 10 + num % 10;
            }

            sum += num;
        }
        
        for (int num : str | views::reverse | views::stride(2) | views::transform([](char ch) { return (int)(ch - '0'); }))
        {
            sum += num;
        }

        if (sum % 10 == 0)
        {
            println("T");
        }
        else
        {
            println("F");
        }
    }
    
    return 0;
}
