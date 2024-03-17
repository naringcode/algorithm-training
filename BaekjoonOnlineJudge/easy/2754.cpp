#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    if ("A+" == str)
    {
        cout << "4.3";
    }
    
    if ("A0" == str)
    {
        cout << "4.0";
    }
    
    if ("A-" == str)
    {
        cout << "3.7";
    }
    
    if ("B+" == str)
    {
        cout << "3.3";
    }
    
    if ("B0" == str)
    {
        cout << "3.0";
    }
    
    if ("B-" == str)
    {
        cout << "2.7";
    }
    
    if ("C+" == str)
    {
        cout << "2.3";
    }
    
    if ("C0" == str)
    {
        cout << "2.0";
    }
    
    if ("C-" == str)
    {
        cout << "1.7";
    }
    
    if ("D+" == str)
    {
        cout << "1.3";
    }
    
    if ("D0" == str)
    {
        cout << "1.0";
    }
    
    if ("D-" == str)
    {
        cout << "0.7";
    }

    if ("F" == str)
    {
        cout << "0.0";
    }
    
    return 0;
}