#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int num;

int arrType[100'004];
int arrVal[100'004];

vector<int> vec;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arrType[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arrVal[i];

        if (0 == arrType[i])
        {
            vec.push_back(arrVal[i]);
        }
    }

    while (vec.size())
    {
        q.push(vec.back());

        vec.pop_back();
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> num;

        q.push(num);

        cout << q.front() << ' ';

        q.pop();
    }

    return 0;
}