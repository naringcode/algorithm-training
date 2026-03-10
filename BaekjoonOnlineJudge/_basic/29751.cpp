#include <iostream>

using namespace std;

int main()
{
    double w;
    double h;
    
    cin >> w >> h;
    
    cout.precision(1);
    
    cout << fixed << (w * h) / 2.0 << endl;

    return 0;
}