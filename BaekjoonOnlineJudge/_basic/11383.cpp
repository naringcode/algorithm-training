#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

vector<string> vec;

bool res = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        vec.push_back(temp);
    }
    
    for (int i : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        for (int j : views::iota(0, ssize(vec[i])))
        {
            if (!(temp[j * 2] == vec[i][j] && temp[j * 2 + 1] == vec[i][j]))
            {
                res = false;
            }
        }
    }

    if (res == true)
    {
        println("Eyfa");
    }
    else
    {
        
        println("Not Eyfa");
    }

    return 0;
}
