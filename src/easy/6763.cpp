#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    b -= a;

    if (b <= 0)
    {
        cout << "Congratulations, you are within the speed limit!";
    }
    else if (b <= 20)
    {
        cout << "You are speeding and your fine is $100.";
    }
    else if (b <= 30)
    {
        cout << "You are speeding and your fine is $270.";
    }
    else
    {
        cout << "You are speeding and your fine is $500.";
    }

    return 0;
}
