#include <bits/stdc++.h>

using namespace std;

struct Score
{
    int id;

    int cnt[3];

    int total;
};

Score students[3];

int n;

int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i <= 3; i++)
    {
        students[i - 1].id = i;
    }

    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;

        students[0].total += a;
        students[0].cnt[a - 1]++;
        
        students[1].total += b;
        students[1].cnt[b - 1]++;
        
        students[2].total += c;
        students[2].cnt[c - 1]++;
    }

    sort(students, students + 3, [](const Score& lhs, const Score& rhs)
    {
        if (lhs.total == rhs.total)
        {
            if (lhs.cnt[2] != rhs.cnt[2])
                return lhs.cnt[2] > rhs.cnt[2];

            if (lhs.cnt[1] != rhs.cnt[1])
                return lhs.cnt[1] > rhs.cnt[1];
                
            if (lhs.cnt[0] != rhs.cnt[0])
                return lhs.cnt[0] > rhs.cnt[0];
        }

        return lhs.total > rhs.total;
    });

    if (students[0].total == students[1].total &&
        students[0].cnt[2] == students[1].cnt[2] &&
        students[0].cnt[1] == students[1].cnt[1] &&
        students[0].cnt[0] == students[1].cnt[0])
    {
        cout << 0 << ' ' << students[0].total;
    }
    else
    {
        cout << students[0].id << ' ' << students[0].total;
    }

    return 0;
}
