#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int arr[500'004];

int a;
int b;

int res;

int doFind(int here)
{
    if (here == arr[here])
        return here;

    return arr[here] = doFind(arr[here]);
}

bool doUnion(int a, int b)
{
    a = doFind(a);
    b = doFind(b);

    if (a == b)
        return false;

    arr[b] = a;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;

        if (res)
            continue;

        if (doFind(a) == doFind(b))
        {
            res = i;

            continue;
        }
        
        doUnion(a, b);
    }

    cout << res;

    return 0;
}