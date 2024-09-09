#include <iostream>

using namespace std;

int n;
int m;

int res;

int main()
{
    cin >> n >> m;

    for (int i = m; i <= n; i += m)
    {
        res += i;
    }

    cout << res;
    
    return 0;
}
