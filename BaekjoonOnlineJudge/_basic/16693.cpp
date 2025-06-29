#include <bits/stdc++.h>

using namespace std;

using ll = long long;

double a1;
double p1;
double r1;
double p2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a1 >> p1;
    cin >> r1 >> p2;

    if ((((r1 * r1) * std::numbers::pi) / p2) > (a1 / p1))
    {
        println("Whole pizza");
    }
    else
    {
        println("Slice of pizza");
    }

    return 0;
}
