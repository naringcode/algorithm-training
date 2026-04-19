#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        getline(cin, str);
        if (str == "#")
            break;

        set<char> mySet;

        for (char ch :  str | 
                        views::filter([](char ch) {
                             return ('a' <= ch && 'z' >= ch) || ('A' <= ch && 'Z' >= ch); 
                        }) |
                        views::transform([](char ch) { 
                            return tolower(ch); 
                        }))
        {
            mySet.insert(ch);
        }

        println("{}", mySet.size());
    }
    
    return 0;
}
