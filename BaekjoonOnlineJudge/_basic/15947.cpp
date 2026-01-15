#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int k;
int word;

void printRu(int cnt)
{
    if (cnt < 5)
    {
        print("tu");

        for (int i : views::iota(0, cnt))
        {
            print("ru");
        }
    }
    else
    {
        print("tu+ru*{}", cnt);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    k    = (n - 1) / 14 + 1;
    word = (n - 1) % 14;

    if (word == 0)
    {
        print("baby");
    }
    else if (word == 1)
    {
        print("sukhwan");
    }
    else if (word == 2)
    {
        printRu(k + 1);
    }
    else if (word == 3)
    {
        printRu(k);
    }
    else if (word == 4)
    {
        print("very");
    }
    else if (word == 5)
    {
        print("cute");
    }
    else if (word == 6)
    {
        printRu(k + 1);
    }
    else if (word == 7)
    {
        printRu(k);
    }
    else if (word == 8)
    {
        print("in");
    }
    else if (word == 9)
    {
        print("bed");
    }
    else if (word == 10)
    {
        printRu(k + 1);
    }
    else if (word == 11)
    {
        printRu(k);
    }
    else if (word == 12)
    {
        print("baby");
    }
    else if (word == 13)
    {
        print("sukhwan");
    }

    return 0;
}
