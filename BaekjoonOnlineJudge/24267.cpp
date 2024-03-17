#include <iostream>

using namespace std;

long long n;

// 조합 문제 인 듯?
// nCr = n! / ((n-r)! r!)
//
// n은 입력받은 수, r은 여기선 3 

int main()
{
    cin >> n;

    n = n * (n - 1) * (n - 2);
    n /= 6;

    cout << n << '\n';

    cout << 3;

    return 0;
}
