#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

struct Student
{
    string name;
    int kor;
    int eng;
    int math;
};

struct Comp
{
    bool operator()(const Student& lhs, const Student& rhs)
    {
        if (lhs.kor == rhs.kor && lhs.eng == rhs.eng && lhs.math == rhs.math)
            return lhs.name < rhs.name;

        if (lhs.kor == rhs.kor && lhs.eng == rhs.eng && lhs.math > rhs.math)
            return lhs.math > rhs.math;

        if (lhs.kor == rhs.kor && lhs.eng < rhs.eng)
            return lhs.eng < rhs.eng;

        return lhs.kor > rhs.kor;
    }
};

int n;
vector<Student> vec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Student student;
        cin >> student.name >> student.kor >> student.eng >> student.math;

        vec.push_back(student);
    }

    sort(vec.begin(), vec.end(), Comp{ });
    
    for (const Student& elem : vec)
    {
        // cout << elem.name << ' ' << elem.kor << ' ' << elem.eng << ' ' << elem.math << '\n';
        cout << elem.name << '\n';
    }

    return 0;
}
