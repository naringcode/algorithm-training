#include <bits/stdc++.h>

using namespace std;

double a;
double b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    a = a / (b * b);

    if (a > 25.0)
    {
        cout << "Overweight";
    }
    else if (a < 18.5)
    {
        cout << "Underweight";
    }
    else
    {
        cout << "Normal weight";
    }

    return 0;
}
