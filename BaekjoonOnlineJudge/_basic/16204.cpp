#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    int temp1 = min(m, k); // 1) n개의 카드 중 m개의 카드 앞면에 O, 2) O는 k개
    int temp2 = min(n - m, n - k); // 1) 나머지 n-m개의 카드 앞면에는 X, 2) X는 n-k개

    println("{}", temp1 + temp2);

    return 0;
}
