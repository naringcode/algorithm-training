#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

ll mat[4][3][4];

ll GetDet(ll mat[][4])
{
    return
        mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - 
        mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + 
        mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                cin >> mat[0][y][x];

                mat[1][y][x] = mat[0][y][x];
                mat[2][y][x] = mat[0][y][x];
                mat[3][y][x] = mat[0][y][x];
            }
        }

        for (int y = 0; y < 3; y++)
        {
            mat[1][y][0] = mat[0][y][3];
            mat[2][y][1] = mat[0][y][3];
            mat[3][y][2] = mat[0][y][3];
        }

        ll detA1 = GetDet(mat[1]);
        ll detA2 = GetDet(mat[2]);
        ll detA3 = GetDet(mat[3]);
        ll detA = GetDet(mat[0]);

        cout << detA1 << ' ' << detA2 << ' ' << detA3 << ' ' << detA << '\n';

        if (0 == detA)
        {
            cout << "No unique solution\n\n";
        }
        else
        {
            double resA1 = ((double)detA1 / (double)detA);
            double resA2 = ((double)detA2 / (double)detA);
            double resA3 = ((double)detA3 / (double)detA);

            if (resA1 > -0.0005 && resA1 < 0.0005)
            {
                resA1 = 0.0;
            }
            
            if (resA2 > -0.0005 && resA2 < 0.0005)
            {
                resA2 = 0.0;
            }
            
            if (resA3 > -0.0005 && resA3 < 0.0005)
            {
                resA3 = 0.0;
            }

            cout.precision(3);
            cout << std::fixed << "Unique solution: " << resA1 << ' ' << resA2 << ' ' << resA3;
            cout << "\n\n";
        }
    }

    return 0;
}
