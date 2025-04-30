#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

string str;
vector<string> words;
set<string> mySet;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    cin.ignore();

    while (t--)
    {
        words.clear();
        mySet.clear();

        getline(cin, str);

        for (auto subRange : views::split(str, " "sv))
        {
            words.push_back(ranges::to<string>(subRange));
        }

        while (true)
        {
            getline(cin, str);

            if (str == "what does the fox say?")
                break;

            size_t idx = str.find("goes ");

            mySet.insert(str.substr(idx + 5));
        }

        for (const auto& word : words)
        {
            if (mySet.contains(word))
                continue;

            print("{} ", word);
        }

        println("");
    }

    return 0;
}
