#include <iostream>
#include <vector>

using namespace std;

int n;

string strA;
string strB;

vector<string> res;


int main()
{
    cin >> n;

    strA.resize(n * 5);
    fill(strA.begin(), strA.end(), '@');

    strB.resize(n);
    fill(strB.begin(), strB.end(), '@');

    for (int i = 0; i < n; i++)
    {
        cout << strA << '\n';
    }

    for (int i = 0; i < n * 3; i++)
    {
        cout << strB << '\n';
    }

    for (int i = 0; i < n; i++)
    {
        cout << strA << '\n';
    }

    return 0;
}
