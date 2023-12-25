#include <bits/stdc++.h>

using namespace std;

int n;
int ufSet[300'004];

int a;
int b;

int doFind(int here)
{
    if (here == ufSet[here])
        return here;

    ufSet[here] = doFind(ufSet[here]);

    return ufSet[here];
}

int doUnion(int a, int b)
{
    a = doFind(a);
    b = doFind(b);

    if (a == b)
        return false;

    ufSet[b] = a;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 300'004; i++)
    {
        ufSet[i] = i;
    }

    cin >> n;

    for (int i = 0; i < n - 2; i++)
    {
        cin >> a >> b;
        a--;
        b--;

        doUnion(a, b);
    }

    a = 0;

    for (int i = 1; i < n; i++)
    {
        if (true == doUnion(a, i))
        {
            cout << a + 1 << ' ' << i + 1;

            break;
        }
    }

    return 0;
}
