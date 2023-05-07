#include <iostream>
#include <vector>

using namespace std;

int n;

int accum;
vector<int> res;

int main()
{
    while (true)
    {
        cin >> n;

        if (-1 == n)
            break;

        accum = 0;
        res.clear();

        for (int i = 1; i < n; i++)
        {
            if (0 == n % i)
            {
                accum += i;
                res.push_back(i);
            }
        }

        if (n == accum)
        {
            cout << n << " = ";

            for (int elem : res)
            {
                cout << elem;

                accum -= elem;

                if (0 != accum)
                {
                    cout << " + ";
                }
            }

            cout << '\n';
        }
        else
        {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}
