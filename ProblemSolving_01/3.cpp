#include <iostream>

using namespace std;

int n;

int res;

int main()
{
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        if (0 != n % i)
            continue;

        if (1 != i)
        {
            cout << "+";
        }

        cout << i;

        res += i;
    }

    cout << "=" << res;
    
    return 0;
}
