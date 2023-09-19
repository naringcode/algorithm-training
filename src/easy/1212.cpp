#include <bits/stdc++.h>

using namespace std;

string digit8;

vector<string> vec;

int num;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> digit8;

    reverse(digit8.begin(), digit8.end());

    for (int idx = 0; idx < digit8.length() - 1; idx++)
    {
        switch (digit8[idx])
        {
            case '0': vec.push_back("000"); break;
            case '1': vec.push_back("001"); break;
            case '2': vec.push_back("010"); break;
            case '3': vec.push_back("011"); break;
            case '4': vec.push_back("100"); break;
            case '5': vec.push_back("101"); break;
            case '6': vec.push_back("110"); break;
            case '7': vec.push_back("111"); break;
        }   
    }

    switch (digit8.back())
    {
        case '0': vec.push_back("0"); break;
        case '1': vec.push_back("1"); break;
        case '2': vec.push_back("10"); break;
        case '3': vec.push_back("11"); break;
        case '4': vec.push_back("100"); break;
        case '5': vec.push_back("101"); break;
        case '6': vec.push_back("110"); break;
        case '7': vec.push_back("111"); break;
    }

    reverse(vec.begin(), vec.end());

    for (auto elem : vec)
    {
        cout << elem;
    }

    return 0;
}