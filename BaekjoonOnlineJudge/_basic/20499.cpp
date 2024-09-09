#include <bits/stdc++.h>

using namespace std;

int k;
int d;
int a;

char ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> ch >> d >> ch >> a;

    if (k + a < d || d == 0)
    {
        cout << "hasu";
    }
    else
    {
        cout << "gosu";
    }

    return 0;
}
