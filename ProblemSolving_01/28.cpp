#include <bits/stdc++.h>

using namespace std;

int n;

int twos;
int fives;

int main()
{
    cin >> n;
    
    for (int num : views::iota(2, n + 1))
    {
        int i = 2;

        while (num != 1)
        {
            if (num % i == 0)
            {
                num /= i;

                if (i == 2)
                {
                    twos++;
                }
                else if (i == 5)
                {
                    fives++;
                }
            }
            else
            {
                i++;
            }
        }
    }

    println("{}", min(twos, fives));

    return 0;
}
