#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int k;

bool arr[100'004];

int go()
{
    int cnt = -1;
    
    queue<int> q;
    q.push(n);
    
    while (false == arr[k] && false == q.empty())
    {
        cnt++;
        queue<int> temp;

        while (false == q.empty())
        {
            int x = q.front();
            q.pop();

            if (x < 0 || x > 100'000)
                continue;

            if (true == arr[x])
                continue;

            arr[x] = true;

            temp.push(x - 1);
            temp.push(x + 1);
            temp.push(x * 2);
        }

        q = temp;
    }

    return cnt;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    cout << go();

    return 0;
}
