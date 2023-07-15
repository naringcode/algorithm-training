#include <bits/stdc++.h>

// 발상 시작(유니온 파인드는 처음)
// 1. 각 사람은 초기에 독립된 원소 집합으로 존재(n이 주어진 이유).
// 2. 모든 파티(집합)에 대해서 참여하는 사람들을 입력
// 3. 완료되었으면 모든 파티를 순회하며 DSU 실행
//
// 핵심 기능
// 1. 초기화
// 2. find()
// 3. union()
//
// 거짓말임을 아는 사람이 대표 원소일 듯

using namespace std;

int n;
int m;

int a;
int b;

int arr[54];

vector<int> jinsil;
vector<int> party[54]; // 파티에 참여하는 사람 { 사람 ∈ 파티 }

int res;

int doFind(int a)
{
    if (a == arr[a])
        return a;

    return arr[a] = doFind(arr[a]);
}

bool doUnion(int a, int b)
{
    a = doFind(a);
    b = doFind(b);

    // 같은 집합에 속해 있다.
    if (a == b)
        return false;

    arr[b] = a; // a가 루트임

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    cin >> a;

    // 진실 입력
    for (int i = 0; i < a; i++)
    {
        cin >> b;

        jinsil.push_back(b);
    }

    sort(jinsil.begin(), jinsil.end());

    // 진실 집합화
    for (int idx = 1; idx < jinsil.size(); idx++)
    {
        doUnion(jinsil[0], jinsil[idx]);
    }

    // 파티에 사람 입력
    for (int i = 0; i < m; i++)
    {
        cin >> a;

        for (int j = 0; j < a; j++)
        {
            cin >> b;

            party[i].push_back(b);            
        }

        sort(party[i].begin(), party[i].end());
    }

    // 예외 처리
    if (0 == jinsil.size())
    {
        cout << m;

        return 0;
    }

    // 파티에 사람 집합화
    for (int i = 0; i < m; i++)
    {
        int deapyo = doFind(party[i][0]);

        for (int idx = 1; idx < party[i].size(); idx++)
        {
            if (jinsil[0] == doFind(party[i][idx]))
            {
                doUnion(party[i][idx], deapyo); // 이미 속해 있다면 결합 안 함
            }
            else
            {
                doUnion(deapyo, party[i][idx]); // 새로운 요소 결합
            }
        }
    }

    // 파티 순회
    for (int i = 0; i < m; i++)
    {
        if (jinsil[0] != doFind(party[i][0]))
        {
            res++;
        }
    }

    cout << res;

    return 0;
}