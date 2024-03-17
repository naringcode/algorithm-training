#include <bits/stdc++.h>

using namespace std;

int n;
int m;

vector<int> boxes;
vector<int> books;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    boxes.resize(n);
    books.resize(m);

    for (int& elem : boxes)
    {
        cin >> elem;
    }

    for (int& elem : books)
    {
        cin >> elem;
    }

    for (int book : books)
    {
        for (int& box : boxes)
        {
            if (box >= book)
            {
                box -= book;

                break;
            }
        }
    }

    res = std::accumulate(boxes.begin(), boxes.end(), 0);

    cout << res;

    return 0;
}
