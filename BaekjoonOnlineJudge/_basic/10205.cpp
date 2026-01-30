#include <iostream>
#include <string>

using namespace std;

int k;
int h;

string str;

int main()
{
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        cin >> h;
        cin >> str;

        for (char ch : str)
        {
            if (ch == 'c')
            {
                h++;
            }
            else if (ch == 'b')
            {
                h--;
            }
        }

        cout << "Data Set " << i << ":\n" << h << "\n\n";
    }

    return 0;
}
