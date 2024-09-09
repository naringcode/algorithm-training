#include <iostream>

using namespace std;

int a;
int b;

int res;

int main()
{
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i != a)
        {
            cout << '+';
        }

        cout << i;

        res += i;
    }

    cout << '=' << res;
    
    return 0;
}
