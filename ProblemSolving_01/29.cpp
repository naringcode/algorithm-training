#include <bits/stdc++.h>

using namespace std;

int n;

int res;

int main()
{
    cin >> n;

    for (int elem : views::iota(1, n + 1))
    {
        while (elem != 0)
        {
            int temp = elem % 10;

            if (temp == 3)
            {
                res++;
            }

            elem /= 10;
        }
    }

    println("{}", res);

    return 0;
}
