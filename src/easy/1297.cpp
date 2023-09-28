#include <bits/stdc++.h>

using namespace std;

double d; // 대각선
double h; // 높이 비율
double w; // 너비 비율

double base;

int resH;
int resW;

int main()
{
    cin >> d >> h >> w;
    
    d = pow(d, 2);
    h = pow(h, 2);
    w = pow(w, 2);
    
    base = d / (h + w);
    
    resH = sqrt(base * h);
    resW = sqrt(base * w);
    
    cout << resH << ' ' << resW;
    
    return 0;
}
