#include <bits/stdc++.h>

using namespace std;

string str;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 5; i++)
    {
        cin >> str;

        if (string::npos != str.find("FBI"))
        {
            vec.push_back(i);
        }
    }

    if (true == vec.empty())
    {
        cout << "HE GOT AWAY!";
    }
    else
    {
        for (auto elem : vec)
        {
            cout << elem << ' ';
        }
    }

    return 0;
}
