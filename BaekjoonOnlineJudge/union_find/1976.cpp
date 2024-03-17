#include <bits/stdc++.h>

using namespace std;

// 여기서 다음으로 갈 수 있는 집합
// adj를 쓰는 그래프 밖에 안 떠오르는데 유니온 파인드로 해결 어떻게?

int n, m;

int arr[204];

int temp;
int prv;

bool flag;

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

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= n; x++)
        {
            cin >> temp;

            if (1 == temp)
            {
                doUnion(y, x);
            }
        }
    }

    cin >> prv;

    prv = doFind(prv);

    for (int i = 1; i < m; i++)
    {
        cin >> temp;

        temp = doFind(temp);

        if (prv != temp)
        {
            flag = true;
        }
    }

    if (true == flag)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}