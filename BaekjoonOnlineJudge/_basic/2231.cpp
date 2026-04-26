#include <iostream>

using namespace std;

int n;

int res;

int sum_of_decomposition(int n)
{
    if (0 == n)
        return 0;

    return n % 10 + sum_of_decomposition(n / 10);
}

int main()
{
    cin >> n;

    for (int i = 1; i <= 1'000'000; i++)
    {
        if (n == i + sum_of_decomposition(i))
        {
            res = i;

            break;
        }
    }

    cout << res;

    return 0;
}
