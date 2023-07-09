#include <bits/stdc++.h>

// 괄호 안에는 연산자가 하나만 들어가야 한다.
// 문제를 잘 읽자...
// 이 문장을 망각해서 며칠이나 잡아 먹음

using namespace std;

using ll = long long;

int n;

char str[20];

vector<ll> numVec;
vector<char> opVec;

ll res = -999'999'999;

ll calc(ll numA, ll numB, char op)
{
    switch (op)
    {
        case '+': return numA + numB;
        case '-': return numA - numB;
        case '*': return numA * numB;
    }

    return 0;
}

void go(int idx, ll psum)
{
    if (idx == numVec.size() - 1)
    {
        res = max(res, psum);

        return;   
    }

    go(idx + 1, calc(psum, numVec[idx + 1], opVec[idx]));

    if (idx + 2 < numVec.size())
    {
        ll temp = calc(numVec[idx + 1], numVec[idx + 2], opVec[idx + 1]);

        go(idx + 2, calc(psum, temp, opVec[idx]));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    for (char ch : str)
    {
        if ('0' <= ch && ch <= '9')
        {
            numVec.push_back(ch - '0');
        }
        else
        {
            opVec.push_back(ch);
        }
    }

    go(0, numVec[0]);

    cout << res;

    return 0;
}
