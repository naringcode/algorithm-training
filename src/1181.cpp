#include <bits/stdc++.h>

using namespace std;

struct Comp
{
    bool operator()(const string& lhs, const string& rhs) const
    {
        if (lhs.length() == rhs.length())
        {
            return lhs < rhs;
        }

        return lhs.length() < rhs.length();
    }
};

vector<string> vec;

int n;
string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        vec.push_back(str);
    }

    sort(vec.begin(), vec.end(), Comp{});

    // 중복 항목 제거 : 문제를 잘 읽자
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for (const auto& elem : vec)
    {
        cout << elem << '\n';
    }

    return 0;
}