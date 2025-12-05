#include <bits/stdc++.h>

using namespace std;

using ll = long long;

double e = 0.0;
double f = 1.0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    println("n e");
    println("- -----------");

    println("0 1");
    println("1 2");
    println("2 2.5");

    e += 1.0 / f;

    f *= 1.0;
    e += 1.0 / f;

    f *= 2.0;
    e += 1.0 / f;

    for (int n : views::iota(3, 10))
    {
        if (n > 0)
        {
            f *= n;
        }

        e += 1.0 / f;

        println("{} {:.9f}", n, e);
        // println(cout, "{} {}", n, e);
    }

    return 0;
}
