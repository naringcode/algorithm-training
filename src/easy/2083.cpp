#include <bits/stdc++.h>

using namespace std;

string name;

int age;
int weight;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> name >> age >> weight;

        if ("#" == name)
            break;

        if (age > 17 || weight >= 80)
        {
            cout << name << ' ' << "Senior\n";
        }
        else
        {
            cout << name << ' ' << "Junior\n";
        }
    }

    return 0;
}