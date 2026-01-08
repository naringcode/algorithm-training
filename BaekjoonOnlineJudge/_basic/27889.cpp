#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    if (str == "NLCS")
    {
        println("North London Collegiate School");
    }
    else if (str == "BHA")
    {
        println("Branksome Hall Asia");
    }
    else if (str == "KIS")
    {
        println("Korea International School");
    }
    else if (str == "SJA")
    {
        println("St. Johnsbury Academy");
    }
    
    return 0;
}
