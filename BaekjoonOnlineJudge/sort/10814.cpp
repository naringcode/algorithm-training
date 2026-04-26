#include <bits/stdc++.h>

using namespace std;

using MyTuple = tuple<int, string, int>;

vector<MyTuple> vec;

int     n;
MyTuple temp;

bool comp(MyTuple& lhs, MyTuple& rhs)
{
    int    ageA;
    string strA;
    int    idxA;
    
    int    ageB;
    string strB;
    int    idxB;

    tie<int, string, int>(ageA, strA, idxA) = lhs;
    tie<int, string, int>(ageB, strB, idxB) = rhs;

    if (ageA == ageB)
    {
        return idxA < idxB;
    }

    return ageA < ageB;
}

int main()
{
    cin >> n;

    vec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> get<0>(temp) >> get<1>(temp);

        get<2>(temp) = i;

        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), comp);

    for (auto& elem : vec)
    {
        cout << get<0>(elem) << ' ' << get<1>(elem) << '\n';
    }

    return 0;
}
