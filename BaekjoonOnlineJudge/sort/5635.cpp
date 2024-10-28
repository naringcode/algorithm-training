#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

struct Person
{
    string name;

    int y;
    int m;
    int d;
};

struct Comp
{
    bool operator()(const Person& lhs, const Person& rhs)
    {
        if (lhs.y < rhs.y)
        {
            return true;
        }
        else if (lhs.y == rhs.y)
        {
            if (lhs.m < rhs.m)
            {
                return true;
            }
            else if (lhs.m == rhs.m)
            {
                return lhs.d < rhs.d;
            }

            return false;
        }

        return false;
    }
};

int n;
vector<Person> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        Person person;

        cin >> person.name >> person.d >> person.m >> person.y;

        vec.push_back(person);
    }

    sort(vec.begin(), vec.end(), Comp{ });

    cout << vec.back().name << '\n' << vec.front().name;

    return 0;
}
