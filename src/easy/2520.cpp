#include <bits/stdc++.h>

using namespace std;

int t;

// 반죽 1개 필요량
double af = 0.5f;
double bf = 0.5f;
double cf = 0.25f;
double df = 0.0625f;
double ef = 0.5625f;

double arr[5];
int    arr2[4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
        cin >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3];

        arr[0] /= af;
        arr[1] /= bf;
        arr[2] /= cf;
        arr[3] /= df;
        arr[4] /= ef;

        int banjuk = *std::min_element(arr, arr + 5);
        int res = 0;

        // cout << banjuk << '\n';

        while (banjuk > 0 && arr2[0] >= 1)
        {
            banjuk--;
            arr2[0]--;

            res++;
        }

        while (banjuk > 0 && arr2[1] >= 30)
        {
            banjuk--;
            arr2[1] -= 30;

            res++;
        }

        while (banjuk > 0 && arr2[2] >= 25)
        {
            banjuk--;
            arr2[2] -= 25;

            res++;
        }

        while (banjuk > 0 && arr2[3] >= 10)
        {
            banjuk--;
            arr2[3] -= 10;

            res++;
        }

        cout << res << '\n';
    }

    return 0;
}
