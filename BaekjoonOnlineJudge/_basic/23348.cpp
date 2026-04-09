#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int A;
int B;
int C;

int n;

int a;
int b;
int c;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> A >> B >> C;
    cin >> n;

    while (n--)
    {
        int sum = 0;

        for (int _ : views::iota(0, 3))
        {
            cin >> a >> b >> c;

            sum += A * a + B * b + C * c;
        }

        res = max(res, sum);
    }

    println("{}", res);

    return 0;
}
