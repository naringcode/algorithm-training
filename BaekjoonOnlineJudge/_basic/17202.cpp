#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str1;
string str2;

vector<int> numVec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str1;
    cin >> str2;

    for (auto [ch1, ch2] : views::zip(str1, str2))
    {
        numVec.push_back(ch1 - '0');
        numVec.push_back(ch2 - '0');
    }

    while (numVec.size() > 2)
    {
        vector<int> temp;

        for (auto [val1, val2] : views::zip(numVec, numVec | views::drop(1)))
        {
            temp.push_back((val1 + val2) % 10);
        }

        numVec = temp;
    }

    println("{}{}", numVec[0], numVec[1]);

    return 0;
}
