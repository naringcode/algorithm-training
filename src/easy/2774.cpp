#include <bits/stdc++.h>

using namespace std;

int n;

string str;
vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vec.resize(10);
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        generate(vec.begin(), vec.end(), [](){ return 0; });

        cin >> str;

        for (char ch : str)
        {
            vec[ch - '0']++;
        }

        int cnt = count_if(vec.begin(), vec.end(), [](int elem){ return elem > 0; });

        cout << cnt << '\n';
    }

    return 0;
}
