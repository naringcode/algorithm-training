#include <bits/stdc++.h>

using namespace std;

// 왼쪽에서 오른쪽으로 가는 투 포인터 유형인 것 같음.
// 더하는 인덱스, 빼는 인덱스

bool che[4'000'004];

vector<int> primes;

int n;
int sum;

int addIdx;
int minIdx;

int res;

void eratos()
{
    for (int i = 2; i < 4'000'004; i++)
    {
        if (che[i])
            continue;

        primes.push_back(i);

        for (int j = i; j < 4'000'004; j += i)
        {
            che[j] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    eratos();

    cin >> n;

    sum = 2;

    addIdx = 1;

    while (addIdx <= primes.size() && minIdx < primes.size() && minIdx < addIdx)
    {
        if (n == sum)
        {
            res++;

            sum += primes[addIdx];

            addIdx++;

            continue;
        }

        if (n < sum)
        {
            sum -= primes[minIdx];

            minIdx++;
        }
        else if (n > sum)
        {
            sum += primes[addIdx];

            addIdx++;
        }
    }
    
    cout << res;

    return 0;
}