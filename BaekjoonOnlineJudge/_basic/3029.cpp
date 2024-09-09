#include <bits/stdc++.h>

using namespace std;

char ch;

int a1;
int b1;
int c1;

int a2;
int b2;
int c2;

int sec1;
int sec2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a1 >> ch >> b1 >> ch >> c1;
    cin >> a2 >> ch >> b2 >> ch >> c2;

    sec1 += a1 * 60 * 60;
    sec1 += b1 * 60;
    sec1 += c1;

    sec2 += a2 * 60 * 60;
    sec2 += b2 * 60;
    sec2 += c2;

    if (sec1 >= sec2)
    {
        sec2 += 24 * 60 * 60;
    }

    sec2 -= sec1;

    c1 = sec2 % 60;
    sec2 /= 60;

    b1 = sec2 % 60;
    a1 = sec2 / 60;

    string res;

    if (a1 < 10)
    {
        res += '0';
    }
    
    res += to_string(a1);
    res += ':';

    if (b1 < 10)
    {
        res += '0';
    }

    res += to_string(b1);
    res += ':';

    if (c1 < 10)
    {
        res += '0';
    }

    res += to_string(c1);

    cout << res;

    return 0;
}
