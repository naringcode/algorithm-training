#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int u;
int l;

bool ok1;
bool ok2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> u >> l;

    if (n >= 1000)
    {
        ok1 = true;
    }
    
    if (u >= 8000 || l >= 260)
    {
        ok2 = true;
    }

    if (ok1 == true && ok2 == true)
    {
        println("Very Good");
    }
    else if (ok1 == true)
    {
        println("Good");
    }
    else
    {
        println("Bad");
    }

    return 0;
}
