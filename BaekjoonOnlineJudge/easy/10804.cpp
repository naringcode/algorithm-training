#include <bits/stdc++.h>

using namespace std;

int a;
int b;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 20; i++)
    {
        vec.push_back(i);
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;

        a--;

        reverse(vec.begin() + a, vec.begin() + b);
    }

    for (int elem : vec)
    {
        cout << elem << ' ';
    }

    return 0;
}
