#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int t;

int a;
int b;

int n;
int m;

// bool arr[1004][1004];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        // memset(&arr[0][0], 0x00, sizeof(arr));

        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;

            // arr[a][b] = true;
            // arr[b][a] = true;
        }

        cout << n - 1 << '\n';
    }

    return 0;
}
