#include <bits/stdc++.h>

using namespace std;

double arr[1004];
double sum;
double mx;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / mx * 100;

        sum += arr[i];
    }

    // cout << std::fixed << std::setprecision(2);

    cout << sum / n;

    return 0;
}
