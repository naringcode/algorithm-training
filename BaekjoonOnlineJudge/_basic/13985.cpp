#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

char ch1;
char ch2;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> ch1 >> b >> ch2 >> c;

    if (a + b == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}