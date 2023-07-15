#include <bits/stdc++.h>

using namespace std;

int n;

int mp;
int mf;
int ms;
int mv;

vector<tuple<int, int, int, int, int>> vec;

int resA = 999'999'999;
int resB = -1;

void go(int val)
{
    int sp = 0;
    int sf = 0;
    int ss = 0;
    int sv = 0;
    int sc = 0;

    for (int i = 0; i < n; i++)
    {
        if (val & (1 << i))
        {
            sp += get<0>(vec[i]);
            sf += get<1>(vec[i]);
            ss += get<2>(vec[i]);
            sv += get<3>(vec[i]);
            sc += get<4>(vec[i]);
        }
    }

    if (sp < mp || sf < mf || ss < ms || sv < mv)
        return;

    if (resA > sc)
    {
        resA = sc;
        resB = val;
    }
    else if (resA == sc) // 사전 순으로 드가즈아
    {
        vector<int> tempA; // 기존
        vector<int> tempB; // 신규

        for (int i = 0; i < n; i++)
        {
            if (resB & (1 << i))
            {
                tempA.push_back(i);
            }

            if (val & (1 << i))
            {
                tempB.push_back(i);
            }
        }

        int size = min(tempA.size(), tempB.size());

        for (int i = 0; i < size; i++)
        {
            if (tempA[i] < tempB[i])
                return;
            
            if (tempA[i] > tempB[i])
            {
                resB = val;

                return;
            }
        }

        // 앞자리가 동일할 때 뒷자리가 있으면 그게 사전순에서 밀린다.
        // ex) '12' + 3 vs '12'
        if (tempA.size() > tempB.size())
        {
            resB = val;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    cin >> mp >> mf >> ms >> mv;

    for (int i = 0; i < n; i++)
    {
        int p;
        int f;
        int s;
        int v;
        int c;

        cin >> p >> f >> s >> v >> c;

        vec.push_back({ p, f, s, v, c });
    }

    for (int i = 0; i < (1 << n); i++)
    {
        go(i);
    }

    if (-1 == resB)
    {
        cout << -1;
    }
    else
    {
        cout << resA << '\n';
        
        for (int i = 0; i < n; i++)
        {
            if (resB & (1 << i))
            {
                cout << i + 1 << ' ';
            }
        }
    }

    return 0;
}