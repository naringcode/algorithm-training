#include <bits/stdc++.h>

using namespace std;

bool balls[3];

int n;
int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    balls[0] = true;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        swap(balls[a - 1], balls[b - 1]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (balls[i])
        {
            cout << i + 1;

            break;
        }
    }

    return 0;
}