#include <bits/stdc++.h>

using namespace std;

double diam;
double rot;
double myTime;

double res1;
double res2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 0;

    while (true)
    {
        cin >> diam >> rot >> myTime;
        
        if (0.0 == rot)
            break;
            
        cnt++;

        // inch
        res1 = 3.1415927 * diam * rot;

        // feet
        res1 = res1 / 12.0;

        // mile
        res1 = res1 / 5280.0;

        // per hour
        res2 = (res1 / myTime) * 3600.0;

        cout.precision(2);
        cout << fixed << "Trip #" << cnt << ": " << res1 << " " << res2 << '\n';
    }

    return 0;
}
