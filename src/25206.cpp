#include <bits/stdc++.h>

using namespace std;

double majorSum;
double hakSum;

string str;
double res;

std::vector<string> split(const string& str, const string& delimiter)
{
    std::vector<string> ret;

    string token;

    int prevPos = 0;
    int pos;

    while ((pos = str.find(delimiter, prevPos)) != string::npos)
    {
        token = str.substr(prevPos, pos - prevPos);

        ret.push_back(token);

        prevPos = pos + delimiter.length();
    }

    token = str.substr(prevPos);

    ret.push_back(token);

    return ret;
}

double major_score_conv(const string& major)
{
    if ("A+" == major)
        return 4.5;

    else if ("A0" == major)
        return 4.0;

    else if ("B+" == major)
        return 3.5;

    else if ("B0" == major)
        return 3.0;

    else if ("C+" == major)
        return 2.5;

    else if ("C0" == major)
        return 2.0;

    else if ("D+" == major)
        return 1.5;

    else if ("D0" == major)
        return 1.0;

    return 0.0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 20; i++)
    {
        std::getline(std::cin, str);

        auto vec = split(str, " ");

        if ("P" == vec[2])
            continue;

        // 전공평점은 전공과목별 (학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.

        double tempA = atof(vec[1].c_str());
        double tempB = major_score_conv(vec[2]);

        hakSum   += tempA;
        majorSum += tempA * tempB;
    }

    res = majorSum / hakSum;

    fixed(cout);
    cout.precision(6);

    cout << res;

    return 0;
}
