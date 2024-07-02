#include <bits/stdc++.h>

using namespace std;

int num;
vector<int> table{ 500, 100, 50, 10, 5, 1 };

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> num;
    num = 1000 - num;

    for (int elem : table)
    {
        res += num / elem;
        num %= elem;
    }
    
    cout << res;

    return 0;
}
