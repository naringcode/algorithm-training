#include <iostream>

using namespace std;

int t;

int a;
int b;
char ch;

int main() 
{
    cin >> t;
    
    while (t--)
    {
        cin >> a >> ch >> b;
        
        cout << a + b << '\n';
    }

    return 0;
}