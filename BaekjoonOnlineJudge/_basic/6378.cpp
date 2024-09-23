#include <bits/stdc++.h>

using namespace std;

string str;

int go(string str)
{
    int temp = 
    std::accumulate(str.begin(), str.end(), 0, [](int total, char ch) {
        return total + (ch - '0');           
    });

    if (temp >= 10)
    {
        return go(std::to_string(temp));
    }

    return temp;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> str;

        if ("0" == str)
            break;

        cout << go(str) << '\n';
    }

    return 0;
}
