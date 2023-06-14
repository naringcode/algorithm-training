#include <bits/stdc++.h>

using namespace std;

int n;
int m;

vector<int> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    vec.resize(n);
    generate(vec.begin(), vec.end(), [v = 1]() mutable { return v++; });

    for (int i = 0; i < m; i++)
    {
        cin >> n;

        auto found = find(vec.begin(), vec.end(), n);

        if (found == vec.begin())
        {
            vec.erase(vec.begin());

            continue;
        }

        int left  = found - vec.begin();
        int right = vec.end() - found;

        res += min(left, right);
        
        *found = 0;

        rotate(vec.begin(), found, vec.end());

        vec.erase(vec.begin());
    }

    cout << res;
    
    return 0;
}
