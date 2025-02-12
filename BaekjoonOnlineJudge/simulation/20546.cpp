#include <bits/stdc++.h>

using namespace std;

using ll = long long;

std::vector<int> prices;

int jun;
int seong;

int junS;
int seongS;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> jun;
    seong = jun;

    for (int i = 0; i < 14; i++)
    {
        int temp;
        cin >> temp;

        prices.push_back(temp);
    }

    //
    for (auto elem : prices)
    {
        junS += jun / elem;
        jun  %= elem;
    }

    jun += junS * prices.back();

    //
    int piv = 0;
    int cnt = 0;

    int prv = prices.front();

    for (auto elem : prices)
    {
        int diff = elem - prv;

        if (diff == 0)
        {
            diff = 0;
            cnt  = 0;
        }
        else
        {
            diff /= abs(diff);

            if (diff != piv)
            {
                piv = diff;
                cnt = 0;
            }

            cnt++;
        }

        if (cnt >= 3)
        {
            if (piv == -1)
            {
                seongS += seong / elem;
                seong  %= elem;
            }
            else if (piv == 1)
            {
                seong += seongS * elem;
                seongS = 0;
            }
        }

        prv = elem;
    }
    
    seong += seongS * prices.back();

    //
    if (jun == seong)
    {
        cout << "SAMESAME";
    }
    else if (jun > seong)
    {
        cout << "BNP";
    }
    else
    {
        cout << "TIMING";
    }

    return 0;
}
