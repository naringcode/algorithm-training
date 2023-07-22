#include <bits/stdc++.h>

using namespace std;

int n;
int l;

int a;
int b;

int s = -1;
int e = -1;

vector<pair<int, int>> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        vec.push_back({ a, b });
    }

    sort(vec.begin(), vec.end());

    // 고려해야 할 것
    // 1. 완전히 떨어진 경우
    // 2. 널빤지가 겹쳐서 이어 붙이는 경우
    for (auto& pair : vec)
    {
        if (pair.second <= e)
            continue;

        if (e < pair.first)
        {
            // 끊어진
            int cnt = pair.second - pair.first;

            if (0 == cnt % l)
            {
                cnt /= l;
            }
            else
            {
                cnt = (cnt / l) + 1;
            }

            s = pair.first;
            e = s + (l * cnt);

            res += cnt;
        }
        else
        {
            // 연장
            int cnt = pair.second - e;

            if (0 == cnt % l)
            {
                cnt /= l;
            }
            else
            {
                cnt = (cnt / l) + 1;
            }

            s = e;
            e = s + (l * cnt);

            res += cnt;
        }
    }

    cout << res;

    return 0;
}