#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int num;

double sum1;
double sum2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n == 0)
    {
        println("divide by zero");

        return 0;
    }

    // for (int i : views::iota(0, n))
    // {
    //     cin >> num;
    //
    //     sum1 += num;
    //     sum2 += (double)num / n;
    // }
    //
    // sum1 /= n;
    //
    // println("{:.2f}", sum1 / sum2);

    for (int i : views::iota(0, n))
    {
        cin >> num;
    }

    println("1.00");

    return 0;
}
