#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arr[0] >> arr[1] >> arr[2];

    ranges::sort(arr);

    println("{}", arr[1]);

    return 0;
}
