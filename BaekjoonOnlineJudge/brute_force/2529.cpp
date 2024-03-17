#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int k;

int  numArr[14];
char opArr[14];

bool useNum[10];

string mx = "0";
string mn = "999999999999";

bool check(int numA, int numB, char op)
{
    switch (op)
    {
        case '<': return numA < numB;
        case '>': return numA > numB;
    }

    return false;
}

void go(int idx)
{
    if (k == idx)
    {
        string str;

        for (int i = 0; i < k; i++)
        {
            str += numArr[i] + '0';
        }
        
        mx = max(mx, str);
        mn = min(mn, str);

        return;
    }

    for (int i = 0; i < 10; i++)
    {
        if (true == useNum[i])
            continue;

        numArr[idx] = i;
        useNum[i] = true;

        if (check(numArr[idx - 1], numArr[idx], opArr[idx - 1]))
        {
            go(idx + 1);
        }

        useNum[i] = false;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> opArr[i];
    }

    k++; // 숫자의 개수를 기준으로 판단(그냥 k는 부등호의 개수 기준)

    for (int i = 0; i < 10; i++)
    {
        numArr[0] = i;
        useNum[i] = true;

        go(1);

        useNum[i] = false;
    }

    cout << mx << '\n' << mn;

    return 0;
}
