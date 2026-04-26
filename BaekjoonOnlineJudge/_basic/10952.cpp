#include <bits/stdc++.h>

using namespace std;

int a, b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    while (true)
    {
        cin >> a >> b;

        if (0 == a && 0 == b)
            break;

        cout << a + b << '\n';
    }

    return 0;
}
