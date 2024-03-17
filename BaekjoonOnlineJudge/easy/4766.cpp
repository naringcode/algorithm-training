#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

using ll = long long;

double num;
double tempNum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> num;

    while (true)
    {
        cin >> tempNum;

        if (999.0 == tempNum)
            break;

        cout.precision(2);
        cout << fixed << tempNum - num << '\n';

        num = tempNum;
    }

    return 0;
}
