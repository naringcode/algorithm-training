#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
deque<int> dq;

vector<int> in;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        int skill;
        cin >> skill;
        
        in.push_back(skill);
    }

    for (int num : views::iota(0, n) | views::transform([](int elem) { return elem + 1; }))
    {        
        int skill = in.back();
        in.pop_back();

        if (skill == 1)
        {
            dq.push_back(num);
        }
        else if (skill == 2)
        {
            int temp = dq.back();
            dq.pop_back();

            dq.push_back(num);
            dq.push_back(temp);
        }
        else if (skill == 3)
        {
            dq.push_front(num);
        }
    }

    for (int num : dq | views::reverse)
    {
        print("{} ", num);
    }

    return 0;
}
