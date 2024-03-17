#include <bits/stdc++.h>

using namespace std;

map<string, long long> mpVal;
map<string, long long> mpMul;

string str;

long long res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    mpVal["black"] = 0;
    mpVal["brown"] = 1;
    mpVal["red"] = 2;
    mpVal["orange"] = 3;
    mpVal["yellow"] = 4;
    mpVal["green"] = 5;
    mpVal["blue"] = 6;
    mpVal["violet"] = 7;
    mpVal["grey"] = 8;
    mpVal["white"] = 9;

    mpMul["black"] = 1;
    mpMul["brown"] = 10;
    mpMul["red"] = 100;
    mpMul["orange"] = 1000;
    mpMul["yellow"] = 10000;
    mpMul["green"] = 100000;
    mpMul["blue"] = 1000000;
    mpMul["violet"] = 10000000;
    mpMul["grey"] = 100000000;
    mpMul["white"] = 1000000000;

    cin >> str;

    res += mpVal[str] * 10;
    
    cin >> str;

    res += mpVal[str];

    cin >> str;

    res *= mpMul[str];

    cout << res;

    return 0;
}