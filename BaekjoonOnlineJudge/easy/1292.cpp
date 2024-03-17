#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

int a;
int b;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 바로 접근할 수 있게 만들기 위해서
    vec.push_back(0);
    
    for (int i = 1; i < 1004; i++)
    {
        for (int j = 0; j < i; j++)
        {
            vec.push_back(i);
        }
    }

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        res += vec[i];
    }

    cout << res;

    return 0;
}
