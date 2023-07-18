#include <bits/stdc++.h>

using namespace std;

int n, m;

int order, a, b;

int arr[1'000'004];

int doFind(int here)
{
    if (here == arr[here])
        return here;

    return arr[here] = doFind(arr[here]);
}

int doUnion(int a, int b)
{
    // 대표 원소 찾아
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

    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> order >> a >> b;

        if (0 == order)
        {
            doUnion(a, b);
        }
        else
        {
            if (doFind(a) == doFind(b))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}