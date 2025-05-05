// #include <iostream>
// #include <algorithm>
// 
// using namespace std;
// 
// string str;
// string res;
// 
// int main()
// {
//     getline(cin, str);
// 
//     for (char elem : str)
//     {
//         if (' ' == elem)
//             continue;
// 
//         res.push_back(elem);
//     }
// 
//     transform(res.begin(), res.end(), res.begin(), [](char elem)
//     {
//         if (elem >= 'A' && elem <= 'Z')
//             elem += 'a' - 'A';
// 
//         return elem;
//     });
// 
//     cout << res;
//     
//     return 0;
// }
// 

#include <bits/stdc++.h>

using namespace std;

string str;
string res;

int main()
{
    getline(cin, str);
    
    auto engView = str | views::filter([](char ch) { return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); });
    auto smallAlphaView = engView | views::transform([](char ch) 
        {
            if (ch >= 'a' && ch <= 'z')
                return ch;

            return (char)(ch + ('a' - 'A'));
        });

    res = ranges::to<string>(smallAlphaView);

    println("{}", res);

    return 0;
}
