#include <iostream>

using namespace std;

int n;
int temp;

int mn = 100'000'000;
int mx = 0;

int main()
{
    cin >> n;

    while (n--)
    {
        cin >> temp;

        mn = min(mn, temp);
        mx = max(mx, temp);
    }

    cout << mx - mn;
    
    return 0;
}

// int n;
// 
// vector<int> vec;
// 
// int main()
// {
//     cin >> n;
// 
//     for (int i : views::iota(0, n))
//     {
//         int temp;
//         cin >> temp;
// 
//         vec.push_back(temp);
//     }
// 
//     ranges::sort(vec);
// 
//     println("{}", vec.back() - vec.front());
// 
//     return 0;
// }
