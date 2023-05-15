#include <iostream>

using namespace std;

int angles[3];

int main()
{
    cin >> angles[0] >> angles[1] >> angles[2];

    if (angles[0] == 60 && angles[0] == angles[1] && angles[1] == angles[2])
    {
        cout << "Equilateral";
    }
    else if (angles[0] + angles[1] + angles[2] == 180)
    {
        if (angles[0] == angles[1] || angles[0] == angles[2] || angles[1] == angles[2])
        {
            cout << "Isosceles";
        }
        else
        {
            cout << "Scalene";
        }
    }
    else
    {
        cout << "Error";
    }

    return 0;
}
