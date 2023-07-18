#include <bits/stdc++.h>

using namespace std;

int t;
int f;

// string to string 매핑을 위한 것(보통은 int to int)
map<string, string> dic;
map<string, int> sz; // 대표 원소에 사이즈 누적

string strA;
string strB;

// 시간 초과나면 그때 가서 생각하자
// 일단 구현 ㄱㄱ

string doFind(string& here)
{
    if (here == dic[here])
        return here;

    return dic[here] = doFind(dic[here]);
}

bool doUnion(string& a, string& b)
{
    a = doFind(a);
    b = doFind(b);

    if (a == b)
        return false;

    dic[b] = a;

    int temp = sz[a];

    sz[a] += sz[b];
    sz[b] += temp;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        cin >> f;

        for (int ff = 0; ff < f; ff++)
        {
            cin >> strA >> strB;

            if (dic.end() == dic.find(strA))
            {
                dic[strA] = strA;
                sz[strA] = 1;
            }

            if (dic.end() == dic.find(strB))
            {
                dic[strB] = strB;
                sz[strB] = 1;
            }

            doUnion(strA, strB);

            cout << sz[doFind(strA)] << '\n';
        }

        dic.clear();
        sz.clear();
    }

    return 0;
}