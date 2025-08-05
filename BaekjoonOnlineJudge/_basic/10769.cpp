#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int happy;
int sad;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, str);
    
    for (auto [ch1, ch2, ch3] : views::zip(str, str | views::drop(1), str | views::drop(2)))
    {
        if (ch1 == ':' && ch2 == '-' && ch3 == ')')
        {
            happy++;
        }
        else if (ch1 == ':' && ch2 == '-' && ch3 == '(')
        {
            sad++;
        }
    }

    if (happy == 0 && sad == 0)
    {
        println("none");
    }
    else if (happy == sad)
    {
        println("unsure");
    }
    else if (happy > sad)
    {
        println("happy");
    }
    else if (happy < sad)
    {
        println("sad");
    }

    return 0;
}
