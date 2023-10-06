#include <bits/stdc++.h>

using namespace std;

int n;

string str;
double val;

double res;
double aaa;

double to_score(string str)
{
    if ("A+" == str)
    {
        return 4.3;
    }
    
    if ("A0" == str)
    {
        return 4.0;
    }
    
    if ("A-" == str)
    {
        return 3.7;
    }
    
    if ("B+" == str)
    {
        return 3.3;
    }
    
    if ("B0" == str)
    {
        return 3.0;
    }
    
    if ("B-" == str)
    {
        return 2.7;
    }
    
    if ("C+" == str)
    {
        return 2.3;
    }
    
    if ("C0" == str)
    {
        return 2.0;
    }
    
    if ("C-" == str)
    {
        return 1.7;
    }
    
    if ("D+" == str)
    {
        return 1.3;
    }
    
    if ("D0" == str)
    {
        return 1.0;
    }
    
    if ("D-" == str)
    {
        return 0.7;
    }

    return 0.0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        cin >> val >> str;

        res += double(val) * to_score(str);
        aaa += double(val);
    }

    res /= aaa;
    res *= 100.0;

    res = round(res);
    res /= 100.0;

    cout << fixed;
    cout.precision(2);

    cout << res;

    return 0;
}