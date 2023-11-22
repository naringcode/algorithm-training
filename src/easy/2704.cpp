#include <bits/stdc++.h>

using namespace std;

int n;

string str;

string conv_time_to_binary(string time)
{
    stringstream ss{ time };
    string temp;

    string res = "";

    while (getline(ss, temp, ':'))
    {
        res += bitset<6>(stoi(temp)).to_string();
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        str = conv_time_to_binary(str);

        for (int i = 0; i < 6; i++)
        {
            cout << str[i] << str[i + 6] << str[i + 12];
        }

        cout << ' ' << str << '\n';
    }

    return 0;
}