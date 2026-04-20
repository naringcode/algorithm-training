#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int _x1;
int _y1;
int _x2;
int _y2;

int _xx1;
int _yy1;
int _xx2;
int _yy2;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> _x1 >> _y1 >> _x2 >> _y2;
    cin >> _xx1 >> _yy1 >> _xx2 >> _yy2;

    int temp1 = max(_x2, _xx2) - min(_x1, _xx1);
    int temp2 = max(_y2, _yy2) - min(_y1, _yy1);

    res = max(temp1, temp2);
    res *= res;

    println("{}", res);

    return 0;
}
