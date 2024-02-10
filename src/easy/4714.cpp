#include <bits/stdc++.h>

using namespace std;

double n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n;

        if (0.0 > n)
            break;

        cout.precision(2);
        cout << fixed << "Objects weighing " << n << " on Earth will weigh " << n * 0.167 << " on the moon.\n";
    }

    return 0;
}
