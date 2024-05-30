#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (ll a = 2; a <= 100; a++)
    {
        auto a3 = a * a * a;

        for (ll b = 2; b <= 100; b++)
        {
            auto b3 = b * b * b;

            for (ll c = b + 1; c <= 100; c++)
            {
                auto c3 = c * c * c;

                for (ll d = c + 1; d <= 100; d++)
                {
                    auto d3 = d * d * d;

                    if (a3 == b3 + c3 + d3)
                    {
                        cout << "Cube = " << a << ", Triple = (" << b << ',' << c << ',' << d << ")\n";

                        break;
                    }
                }
            }
        }
    }

    return 0;
}
