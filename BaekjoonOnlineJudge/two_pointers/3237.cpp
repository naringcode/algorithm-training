#include <bits/stdc++.h>

using namespace std;

int n;
int a;

int x;

vector<int> vec;

int idxA;
int idxB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        vec.push_back(a);
    }

    cin >> x;

    sort(vec.begin(), vec.end());

    idxA = 0;
    idxB = n - 1;

    while (idxA < idxB)
    {
        int sum = vec[idxA] + vec[idxB];

        if (sum == x)
        {
            res++;

            idxA++;
            idxB--;

            continue;
        }

        if (sum < x)
        {
            idxA++;
        }
        else
        {
            idxB--;
        }
    }
    
    cout << res;

    return 0;
}