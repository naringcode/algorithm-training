#include <iostream>

using namespace std;

int lines[3];

int main()
{
    while (true)
    {
        cin >> lines[0] >> lines[1] >> lines[2];

        if (lines[0] == 0 && lines[1] == 0 && lines[2] == 0)
            break;

        int idx = 0;
        int sum = 0;

        for (int i = 1; i < 3; i++)
        {
            if (max(lines[idx], lines[i]))
            {
                idx = i;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (idx != i)
            {
                sum += lines[i];
            }
        }

        if (lines[idx] >= sum)
        {
            cout << "Invalid" << '\n';
        }
        else if (lines[0] == lines[1] && lines[1] == lines[2])
        {
            cout << "Equilateral" << '\n';;
        }
        else if (lines[0] == lines[1] || lines[0] == lines[2] || lines[1] == lines[2])
        {
            cout << "Isosceles" << '\n';;
        }
        else
        {
            cout << "Scalene" << '\n';;
        }
    }

    return 0;
}
