#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
int m;
int k;

priority_queue<int> pq;

vector<int> vec;
int manjok;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m >> k;

    while (n--)
    {
        int temp;
        cin >> temp;

        pq.push(temp);
    }

    while (pq.size() > 0)
    {
        int temp = pq.top();
        pq.pop();

        manjok = (manjok / 2) + temp;
        vec.push_back(manjok);

        temp -= m;

        if (temp > k)
        {
            pq.push(temp);
        }
    }

    cout << vec.size() << '\n';

    for (int elem : vec)
    {
        cout << elem << '\n';
    }

    return 0;
}
