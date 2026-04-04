#include <iostream>
#include <vector>

using namespace std;

int n;

vector<int> res;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for (int j = 1; j <= 10; j++)
        {
            int temp;
            cin >> temp;

            if (temp != ((j - 1) % 5) + 1)
            {
                flag = false;
            }
        }

        if (flag == true)
        {
            res.push_back(i + 1);
        }
    }

    for (int i : res)
    {
        cout << i << '\n';
    }

    return 0;
}
