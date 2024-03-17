#include<bits/stdc++.h>

using namespace std;

int n;
int m;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
    }

    do
    {
        for (int i = 0; i < m; i++)
        {
            cout << vec[i] << ' ';
        }

        cout << '\n';

        reverse(vec.begin() + m, vec.end());
    
    } while (next_permutation(vec.begin(), vec.end()));
    

    return 0;
}
