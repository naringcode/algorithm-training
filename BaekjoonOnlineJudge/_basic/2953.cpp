#include <bits/stdc++.h>

using namespace std;

int resA;
int resB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 5; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            int num;
            cin >> num;

            sum += num;
        }

        if (sum > resB)
        {
            resA = i;
            resB = sum;
        }
    }

    cout << resA << ' ' << resB;

    return 0;
}
