## 모범 답안 & 내 코드

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const string MAX_STR = "1111111111111111111111111111111111111111111111111111111"; // 55자

int t;
int n;

int num_cnt[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

string dp_min[104];

string str_min_comp(string strA, string strB)
{
    if (strA.length() != strB.length())
    {
        return strA.length() > strB.length() ? strB : strA;
    }

    return strA > strB ? strB : strA;
}

string get_max_str(int n)
{
    string ret = "";

    if (n >= 3 && n % 2)
    {
        ret = "7";

        n -= 3;
    }

    while (n != 0)
    {
        ret += "1";

        n -= 2;
    }

    return ret;
}

string get_min_str(int n)
{
    // 만들 수 있는 수가 없음
    // if (n <= 1)
    if (n == 0) // 모두 사용하기가 조건임
        return "";

    string& memo = dp_min[n];

    if (MAX_STR != memo)
        return memo;

    for (int i = 0; i < 10; i++)
    {
        if (n - num_cnt[i] < 0)
            continue;

        if (n == ::n && 0 == i)
            continue;

        memo = str_min_comp(memo, to_string(i) + get_min_str(n - num_cnt[i]));
    }

    return memo;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        cin >> n;

        // 0을 처리한 남은 갯수가 기준일 수도 있으니 매번 DP를 초기화
        fill(dp_min, dp_min + 104, MAX_STR);

        cout << get_min_str(n) << ' ' << get_max_str(n) << '\n';
    }

    return 0;
}