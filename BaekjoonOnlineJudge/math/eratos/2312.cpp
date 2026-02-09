#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                int cnt = 0;

                while (num % i == 0)
                {
                    num /= i;
                    cnt++;
                }

                println("{} {}", i, cnt);
            }
        }
    }

    return 0;
}
