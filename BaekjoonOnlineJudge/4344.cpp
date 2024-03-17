#include <bits/stdc++.h>

using namespace std;

int arr[1004];

int c;
int n;

int sum;
int avg;

float res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << std::fixed;
    cout.precision(3);

    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> n;

        sum = 0;
        res = 0.f;

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];

            arr[j] *= 10000;

            sum += arr[j];
        }

        avg = sum / n;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] > avg)
            {
                res += 1.f;
            }
        }

        res = res / (float)n * 100.f;

        cout << res << "%\n";
    }

    return 0;
}
