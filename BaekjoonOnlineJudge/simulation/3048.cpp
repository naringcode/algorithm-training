#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n1;
int n2;

string strA;
string strB;
string str;

vector<int> vec;

int t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n1 >> n2;
    cin >> strA >> strB;
    cin >> t;
    
    ranges::reverse(strA);

    str = strA + strB;

    for (int i : views::iota(0, (int)strA.length()))
    {
        vec.push_back(0);
    }
    
    for (int i : views::iota(0, (int)strB.length()))
    {
        vec.push_back(1);
    }

    for (int i = 0; i < t; i++)
    {
        int idx = 0;

        // 모든 개미 한 칸 전진
        while (idx < str.length() - 1)
        {
            if (vec[idx] == 0 && vec[idx + 1] == 1)
            {
                swap(str[idx], str[idx + 1]);
                swap(vec[idx], vec[idx + 1]);

                idx += 2;
            }
            else
            {
                idx++;
            }
        }
    }

    println("{}", str);

    return 0;
}
