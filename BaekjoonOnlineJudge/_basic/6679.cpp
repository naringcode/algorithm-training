#include <bits/stdc++.h>

using namespace std;

using ll = long long;

//vector<int> num10;
//vector<int> num12;
//vector<int> num16;

int num10;
int num12;
int num16;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(1000, 10000))
    {
        // num10.clear();
        // num12.clear();
        // num16.clear();

        num10 = 0;
        num12 = 0;
        num16 = 0;

        for (int temp = i; temp != 0; temp /= 10)
        {
            // num10.push_back(temp % 10);

            num10 += temp % 10;
        }
        
        for (int temp = i; temp != 0; temp /= 12)
        {
            // num12.push_back(temp % 12);
            
            num12 += temp % 12;
        }
        
        for (int temp = i; temp != 0; temp /= 16)
        {
            // num16.push_back(temp % 16);
            
            num16 += temp % 16;
        }
        
        if (num10 == num12 && num12 == num16)
        {
            println("{}", i);
        }
    }

    return 0;
}
