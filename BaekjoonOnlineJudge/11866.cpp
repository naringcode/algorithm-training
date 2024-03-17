#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

int n;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        vec.push_back(i + 1);
    }

    reverse(vec.begin(), vec.end());

    k--;

    cout << '<';

    while (vec.size())
    {
        rotate(vec.rbegin(), vec.rbegin() + k % vec.size(), vec.rend());

        cout << vec.back();
        
        vec.pop_back();

        if (vec.size())
        {
            cout << ", ";
        }
    }

    cout << '>';
    
    return 0;
}
