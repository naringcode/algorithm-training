#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<string> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        vec.push_back(temp);
    }

    ranges::sort(vec, [](const string& lhs, const string& rhs) {
        if (lhs.length() != rhs.length())
            return lhs.length() < rhs.length();

        if (lhs.length() == rhs.length())
        {
            auto lhsView = lhs | views::transform([](char ch) {
                if (ch >= '0' && ch <= '9')
                    return ch - '0';
                
                return 0;
            });
            
            auto rhsView = rhs | views::transform([](char ch) {
                if (ch >= '0' && ch <= '9')
                    return ch - '0';
                
                return 0;
            });

            int lhsV = accumulate(lhsView.begin(), lhsView.end(), 0);
            int rhsV = accumulate(rhsView.begin(), rhsView.end(), 0);

            if (lhsV != rhsV)
                return lhsV < rhsV;
        }

        return lhs < rhs;
    });

    for (const string& elem : vec)
    {
        println("{}", elem);
    }

    return 0;
}
