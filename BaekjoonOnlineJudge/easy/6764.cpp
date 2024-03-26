#include <bits/stdc++.h>

using namespace std;

std::vector<int> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vec.resize(4);
    cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];

    if ((vec[0] == vec[1]) && (vec[0] == vec[2]) && (vec[0] == vec[3]))
    {
        cout << "Fish At Constant Depth";
    }
    else
    {
        if (vec[3] - vec[2] > 0 && vec[2] - vec[1] > 0 && vec[1] - vec[0] > 0)
        {
            cout << "Fish Rising";
        }
        else if (vec[3] - vec[2] < 0 && vec[2] - vec[1] < 0 && vec[1] - vec[0] < 0)
        {
            cout << "Fish Diving";
        }
        else
        {
            cout << "No Fish";
        }
    }

    return 0;
}
