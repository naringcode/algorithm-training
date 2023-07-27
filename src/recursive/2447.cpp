#include <bits/stdc++.h>

using namespace std;

int n;

vector<string> vec;

// 복제 -> 가운데 지우고 -> 복제 -> 반복
void go(int size)
{
    if (size == n)
        return;

    // 가로 확장
    for (int i = 0; i < size; i++)
    {
        string temp = vec[i];

        for (int j = 1; j < 3; j++)
        {
            vec[i] += temp;
        }        
    }

    // 세로 확장
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            vec[i * size + j] = vec[j];
        }
    }

    // 가운데 비우기
    for (int y = size; y < size * 2; y++)
    {        
        for (int x = size; x < size * 2; x++)
        {
            vec[y][x] = ' ';
        }
    }

    go(size * 3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    vec.resize(n);

    vec[0] = "***";
    vec[1] = "* *";
    vec[2] = "***";

    go(3);

    for (auto& elem : vec)
    {
        cout << elem << '\n';
    }

    return 0;
}