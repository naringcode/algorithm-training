#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    strA = std::to_string(a);
    std::swap(strA[0], strA[2]);

    strB = std::to_string(b);
    std::swap(strB[0], strB[2]);

    a = atoi(strA.c_str());
    b = atoi(strB.c_str());

    cout << std::max(a, b);

    return 0;
}
