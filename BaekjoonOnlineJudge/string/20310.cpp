#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int cnt0;
int cnt1;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        if (ch == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
    }

    cnt0 /= 2;
    cnt1 /= 2;

    // 1은 앞에서 제거
    for (int idx : views::iota(0, ssize(str)))
    {
        if (str[idx] == '1')
        {
            str[idx] = '-';

            cnt1--;
            if (cnt1 == 0)
                break;
        }
    }
    
    // 0은 뒤에서 제거
    for (int idx : views::iota(0, ssize(str)) | views::reverse)
    {
        if (str[idx] == '0')
        {
            str[idx] = '-';

            cnt0--;
            if (cnt0 == 0)
                break;
        }
    }

    res = ranges::to<string>(str | views::filter([](char ch) { return ch != '-'; } ));

    println("{}", res);

    return 0;
}
