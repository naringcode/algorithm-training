#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;

int sumY;
int sumM;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    vec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int elem;

        cin >> elem;
        vec.push_back(elem);
    }

    for (int elem : vec)
    {
        while (elem >= 0)
        {
            elem -= 30;
            sumY += 10;
        }
    }

    for (int elem : vec)
    {
        while (elem >= 0)
        {
            elem -= 60;
            sumM += 15;
        }
    }

    if (sumY > sumM)
    {
        cout << "M " << sumM;
    }
    else if (sumY < sumM)
    {
        cout << "Y " << sumY;
    }
    else
    {
        cout << "Y M " << sumY;
    }

    return 0;
}
