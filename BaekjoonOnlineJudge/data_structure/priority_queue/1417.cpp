#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int vote;

priority_queue<int> pq;
int cnt;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> vote;

    if (1 == n)
    {
        cout << 0;

        return 0;
    }

    n--;

    while (n--)
    {
        int temp;
        cin >> temp;

        pq.push(temp);
    }

    while (pq.top() >= vote)
    {
        vote++;
        cnt++;

        int temp = pq.top();
        pq.pop();

        temp--;
        pq.push(temp);
    }

    cout << cnt;

    return 0;
}
