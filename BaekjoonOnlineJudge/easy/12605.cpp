#include <bits/stdc++.h>

using namespace std;

int n;
string str;

vector<string> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, str);

        stringstream ss{ str };
        vec.clear();
        
        while (ss >> str)
        {
            vec.push_back(str);
        }

        reverse(vec.begin(), vec.end());

        cout << "Case #" << i + 1 << ": ";
        for (string& elem : vec)
        {
            cout << elem << ' ';
        }

        cout << '\n';
    }

    return 0;
}
