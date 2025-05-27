#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

double d; // dogs
double f; // food per dog in pounds
double p; // price of the food per pound

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> d >> f >> p;

        println("${:.2f}", d * f * p);
    }

    return 0;
}
