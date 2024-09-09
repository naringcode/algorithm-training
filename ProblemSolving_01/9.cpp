#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[50'004];

// 전략 : 약수를 계산하지 말고 배수 조건을 보기

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            arr[j]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
