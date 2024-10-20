#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int n;
string str;

double arr[30];

vector<double> resVec;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (char ch : str)
    {
        int idx = ch - 'A';

        if ('+' == ch)
        {
            double l = resVec.back();
            resVec.pop_back();
         
            double r = resVec.back();
            resVec.pop_back();

            resVec.push_back(r + l);
        }
        else if ('-' == ch)
        {
            double l = resVec.back();
            resVec.pop_back();

            double r = resVec.back();
            resVec.pop_back();

            resVec.push_back(r - l);
        }
        else if ('*' == ch)
        {
            double l = resVec.back();
            resVec.pop_back();

            double r = resVec.back();
            resVec.pop_back();

            resVec.push_back(r * l);
        }
        else if ('/' == ch)
        {
            double l = resVec.back();
            resVec.pop_back();

            double r = resVec.back();
            resVec.pop_back();

            resVec.push_back(r / l);
        }
        else
        {
            // number
            resVec.push_back(arr[idx]);
        }
    }

    cout.precision(2);
    cout << fixed << resVec.back();

    return 0;
}
