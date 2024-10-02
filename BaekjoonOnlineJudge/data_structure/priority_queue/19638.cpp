#include <bits/stdc++.h>

using namespace std;

int n;
int h;
int t;

priority_queue<int> pq;
int cnt;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> h >> t;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        pq.push(temp);
    }

    while (t--)
    {
        if (pq.top() < h)
            break;

        int temp = pq.top();
        pq.pop();

        temp /= 2;
        temp = max(temp, 1);

        pq.push(temp);

        cnt++;
    }

    if (pq.top() >= h)
    {
        cout << "NO\n"; 
        cout << pq.top();
    }
    else
    {
        cout << "YES\n";
        cout << cnt;
    }


    return 0;
}
