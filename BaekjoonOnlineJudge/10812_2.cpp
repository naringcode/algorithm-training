#include <bits/stdc++.h>

// using namespace std;

int arr[104];

int n, m;
int left, right, mid;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cin >> n >> m;

    for (int idx = 0; idx < n; idx++)
    {
        arr[idx] = idx + 1;
    }

    for (int cnt = 0; cnt < m; cnt++)
    {
        std::cin >> left >> right >> mid;

        left--;
        right--;
        mid--;

        std::rotate(&arr[left], &arr[mid], &arr[right + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
    return 0;
}
