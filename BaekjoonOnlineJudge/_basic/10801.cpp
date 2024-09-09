#include <bits/stdc++.h>

using namespace std;

vector<int> vecA;
vector<int> vecB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        int temp;

        cin >> temp;

        vecA.push_back(temp);
    }

    for (int i = 0; i < 10; i++)
    {
        int temp;

        cin >> temp;

        vecB.push_back(temp);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vecA[i] - vecB[i] > 0)
        {
            res++;
        }
        else if (vecA[i] - vecB[i] < 0)
        {
            res--;
        }
    }
        
    if (res > 0)
    {
        cout << 'A';
    }
    else if (res < 0)
    {
        cout << 'B';
    }
    else
    {
        cout << 'D';
    }

    return 0;
}
