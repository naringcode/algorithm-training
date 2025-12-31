#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string strA;
string strB;
string strC;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    strA.resize(n);
    ranges::fill(strA, '*');

    strB.resize(n);
    ranges::fill(strB, ' ');
    strB.front() = '*';
    strB.back()  = '*';

    strC = strB;
    strC.pop_back();
    strC += strB;

    // strA
    {
        print("{}", strA);
        
        for (int j : views::iota(0, 1 + (n - 2) * 2))
        {
            print(" ");
        }
        
        println("{}", strA);
    }

    for (int i : views::iota(1, n - 1))
    {
        for (int j : views::iota(0, i))
        {
            print(" ");
        }

        print("{}", strB);
        
        for (int j : views::iota(0, 1 + (n - i - 2) * 2))
        {
            print(" ");
        }
        
        println("{}", strB);
    }

    for (int i : views::iota(1, n))
    {
        print(" ");
    }
    
    println("{}", strC);
    
    for (int i : views::iota(1, n - 1) | views::reverse)
    {
        for (int j : views::iota(0, i))
        {
            print(" ");
        }

        print("{}", strB);
        
        for (int j : views::iota(0, 1 + (n - i - 2) * 2))
        {
            print(" ");
        }
        
        println("{}", strB);
    }
    
    // strA
    {
        print("{}", strA);
        
        for (int j : views::iota(0, 1 + (n - 2) * 2))
        {
            print(" ");
        }
        
        println("{}", strA);
    }

    return 0;
}
