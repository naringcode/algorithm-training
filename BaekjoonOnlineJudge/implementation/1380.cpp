#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
string str;

vector<string> vec;
bool arr[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 1;

    while (true)
    {
        cin >> n;
        cin.ignore();

        if (n == 0)
            break;

        vec.clear();
        ranges::fill_n(arr, n, false);

        for (int i = 0; i < n; i++)
        {
            getline(cin, str);

            vec.push_back(str);
        }

        for (int i = 0; i < 2 * n - 1; i++)
        {
            int  num;
            char ch;

            cin >> num >> ch;

            arr[num - 1] = !arr[num - 1];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == true)
            {
                println("{} {}", cnt++, vec[i]);

                break;
            }
        }
    }

    return 0;
}
