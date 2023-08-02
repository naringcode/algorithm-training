#include <bits/stdc++.h>

using namespace std;

int n;

int type;
int num;

queue<int> q;

int mxSize;
int mnBack;

vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> type;

        if (1 == type)
        {
            cin >> num;

            q.push(num);

            if (mxSize < q.size())
            {
                res.clear();

                mnBack = q.back();
                mxSize = q.size();
            }
            else if (mxSize == q.size() && mnBack > q.back())
            {
                mnBack = q.back();
            }
        }
        else
        {
            q.pop();
        }
    }

    cout << mxSize << ' ' << mnBack;

    return 0;
}