#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int n;
string str;

vector<string> rawNames;
vector<string> sortedNames;

bool increasing = true;
bool decreasing = true;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        rawNames.push_back(str);
        sortedNames.push_back(str);
    }

    sort(sortedNames.begin(), sortedNames.end());

    for (int i = 0; i < n; i++)
    {
        if (rawNames[i] != sortedNames[i])
        {
            increasing = false;
        }
        
        if (rawNames[i] != sortedNames[n - i - 1])
        {
            decreasing = false;
        }
    }

    if (increasing == true)
    {
        cout << "INCREASING";
    }
    else if (decreasing == true)
    {
        cout << "DECREASING";
    }
    else
    {
        cout << "NEITHER";
    }

    return 0;
}
