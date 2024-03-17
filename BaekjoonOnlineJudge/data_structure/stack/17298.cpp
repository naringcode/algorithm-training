#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> vec;
vector<int> okunsu;

vector<int> res;

// 값을 보관하는 것이 아니라 인덱스를 보관하는 것이 핵심
// 스택인 걸 알아도 인덱스를 보관해야 한다는 것을 떠올리지 못하면 끝도 없이 어렵다
// 숙달될 때까지 시간날 때마다 복기 복기
// monotone stack

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    vec.resize(n);
    res.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];

        while (okunsu.size())
        {
            if(vec[okunsu.back()] < vec[i])
            {
                res[okunsu.back()] = vec[i];

                okunsu.pop_back();
            }
            else
            {
                break;
            }
        }

        okunsu.push_back(i);
    }

    while (okunsu.size())
    {
        res[okunsu.back()] = -1;

        okunsu.pop_back();
    }

    for (int elem : res)
    {
        cout << elem << ' ';
    }

    return 0;
}
