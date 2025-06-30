#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int ax;
int ay;
int az;
int cx;
int cy;
int cz;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;

    println("{} {} {}", -(az - cx), cy / ay, -(ax - cz));

    return 0;
}
