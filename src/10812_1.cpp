#include <bits/stdc++.h>

// using namespace std;

int arr[104];
int tempArr[104];

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

        int leftFill = right - mid + 1;

        for (int i = 0; i < leftFill; i++)
        {
            tempArr[left + i] = arr[mid + i];
        }

        int rightFill = mid - left;

        for (int i = 0; i < rightFill; i++)
        {
            tempArr[left + leftFill + i] = arr[left + i];
        }

        memcpy(&arr[left], &tempArr[left], sizeof(int) * (leftFill + rightFill));
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
    return 0;
}
