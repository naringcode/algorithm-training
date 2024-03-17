#include <bits/stdc++.h>

using namespace std;

int n;

queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
     
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (1 != q.size())
    {
        q.pop();

        int front = q.front();

        q.pop();
        q.push(front);
    }

    cout << q.front();

    return 0;
}
