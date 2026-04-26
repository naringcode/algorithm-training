#include <bits/stdc++.h>

using namespace std;

string str;
int    res;

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

        // str.erase(0, pos + delimiter.length());

        prevPos = pos + delimiter.length();
    }

    token = str.substr(prevPos, pos);

    ret.push_back(token);

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    /*
    auto outVec = split(str, "s=");

    for (auto& elem : outVec)
    {
        cout << elem << ' ';
    }
     */

    res = str.length();

    res -= split(str, "c=").size() - 1;
    res -= split(str, "c-").size() - 1;
    res -= split(str, "d-").size() - 1;
    res -= split(str, "lj").size() - 1;
    res -= split(str, "nj").size() - 1;
    res -= split(str, "s=").size() - 1;

    int dzCnt = split(str, "dz=").size() - 1;
    int zCnt  = split(str, "z=").size() - 1;

    zCnt -= dzCnt;

    dzCnt *= 2;

    res -= dzCnt + zCnt;

    cout << res;

    return 0;
}
