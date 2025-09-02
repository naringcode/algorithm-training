#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int b;
int c;
int d;

vector<int> vecB;
vector<int> vecC;
vector<int> vecD;

int resA;
int resB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> b >> c >> d;

    for (int i : views::iota(0, b))
    {
        int temp;
        cin >> temp;

        vecB.push_back(temp);
        resA += temp;
    }
    
    for (int i : views::iota(0, c))
    {
        int temp;
        cin >> temp;

        vecC.push_back(temp);
        resA += temp;
    }
    
    for (int i : views::iota(0, d))
    {
        int temp;
        cin >> temp;

        vecD.push_back(temp);
        resA += temp;
    }

    ranges::sort(vecB);
    ranges::sort(vecC);
    ranges::sort(vecD);

    while (!vecB.empty() && !vecC.empty() && !vecD.empty())
    {
        int temp = vecB.back() + vecC.back() + vecD.back();
        vecB.pop_back();
        vecC.pop_back();
        vecD.pop_back();

        resB += temp * 0.9;
    }

    while (!vecB.empty())
    {
        resB += vecB.back();
        vecB.pop_back();
    }
    
    while (!vecC.empty())
    {
        resB += vecC.back();
        vecC.pop_back();
    }
    
    while (!vecD.empty())
    {
        resB += vecD.back();
        vecD.pop_back();
    }

    println("{}", resA);
    println("{}", resB);

    return 0;
}
