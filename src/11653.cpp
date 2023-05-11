#include <iostream>

using namespace std;

int n;
int op;

int main()
{
    cin >> n;

    op = 1;

    while (1 != n)
    {
        op++;

        if (0 == n % op)
        {
            cout << op << '\n';

            n /= op;

            op = 1;
        }
    }

    return 0;
}
