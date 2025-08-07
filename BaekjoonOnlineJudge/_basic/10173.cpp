#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    while (true)
    {
        getline(cin, str);
        if (str == "EOI")
            break;
            
        ranges::transform(str, str.begin(), ::toupper);

        if (str.find("NEMO") != string::npos)
        {
            println("Found");
        }
        else
        {
            println("Missing");
        }
    }

    return 0;
}
