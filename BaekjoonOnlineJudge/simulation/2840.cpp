#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

int  curr;
bool flag;

char arr[30];
bool alphabets[30];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    while (k--)
    {
        int  tempN;
        char tempCh;

        cin >> tempN >> tempCh;

        if (flag == true)
            continue;

        curr = (curr + tempN) % n;

        if (arr[curr] != 0 && arr[curr] != tempCh)
        {
            flag = true;

            continue;
        }

        if (arr[curr] != tempCh && alphabets[tempCh - 'A'] == true)
        {
            flag = true;

            continue;
        }

        arr[curr] = tempCh;
        alphabets[tempCh - 'A'] = true;
    }

    if (flag == true)
    {
        println("!");
    }
    else
    {
        for (int i : views::iota(0, n))
        {
            if (arr[curr] == 0)
            {
                print("?");
            }
            else
            {
                print("{}", arr[curr]);
            }

            curr = (curr - 1 + n) % n;
        }
    }

    return 0;
}
