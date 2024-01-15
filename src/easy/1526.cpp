#include <bits/stdc++.h>

using namespace std;

int n;

bool arr[1'000'004];

void build(int num)
{
    if (num > 1'000'000)
        return;

    arr[num] = true;

    build(num * 10 + 4);
    build(num * 10 + 7);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    build(0);

    cin >> n;

    do
    {
        if (true == arr[n])
            break;

    } while (n--);

    cout << n;

    return 0;
}
