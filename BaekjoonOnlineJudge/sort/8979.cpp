#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct Item
{
    int id;

    int g;
    int s;
    int b;
};

int n;
int k;

vector<Item> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int id;
        int g;
        int s;
        int b;

        cin >> id >> g >> s >> b;

        vec.emplace_back(id, g, s, b);
    }

    sort(vec.begin(), vec.end(), [](const Item& lhs, const Item& rhs)
    {
        if (lhs.g != rhs.g)
            return lhs.g > rhs.g;

        if (lhs.s != rhs.s)
            return lhs.s > rhs.s;

        return lhs.b > rhs.b;
    });

    int rank = 1;

    for (int idx = 0; idx < n; idx++)
    {
        if (idx > 0 && (vec[idx].g != vec[idx - 1].g || vec[idx].s != vec[idx - 1].s || vec[idx].b != vec[idx - 1].b))
        {
            rank = idx + 1;
        }

        if (vec[idx].id == k)
        {
            cout << rank;

            return 0;
        }
    }

    return 0;
}
