#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// disjoint set (union find)

// 1. 각 분리집합에는 대표 원소가 있다(대표 원소는 루트 노드로 함).
// 2. 각 분리집합에 속한 원소는 상호배타적이다.
// 3. 배열을 트리 형태로 구성하여 분리집합을 표현한다.
// 4. 배열의 인덱스는 자신을 표현하고, 배열값은 부모의 노드를 표현한다(타고 올라가면 각 분리집합의 대표값은 루트 노드의 값이 됨).

// disjoint set : 모든 분리집합을 표현한 배열(각 원소의 초깃값은 자신의 인덱스로 함 -> 정점별로 분리집합을 생성함)
// union : 원소를 특정 분리집합에 합치는 연산
// find : 루트 노드를 찾는 연산

int disjointSet[1004];

int doFind(int here)
{
    // 현재 노드의 부모가 루트 노드인지 확인(분리집합의 대표 원소)
    if (here == disjointSet[here])
        return here;

    // 최적화(경로 압축, 트리의 높이를 평탄화하여 줄이는 연산)
    // 최적화 코드는 없어도 동작하지만, 어차피 탐색 결과는 매번 부모 노드로 나온다.
    disjointSet[here] = doFind(disjointSet[here]);

    return disjointSet[here];
}

// a 집합을 b 집합에 연결한다.
bool doUnion(int a, int b)
{
    // a의 값이나 b의 값이 -1인 상황은 가정하지 않는다(두 원소 전부 집합에 속한 상태여야 함).
    a = doFind(a); // 집합의 루트 값으로 갱신함.
    b = doFind(b); // 집합의 루트 값으로 갱신함.

    // 같은 집합에 속해 있다.
    if (a == b)
        return false;

    // 합집합(b 집합의 대표 원소를 a 집합의 대표 원소에 연결)
    // b 집합의 대표 원소를 a 집합의 대표 원소에 연결했을 뿐 경로 압축은 아직 진행하지 않은 상태이다.
    disjointSet[b] = a; // a가 루트임.

    return true;
}

void Case01()
{
    // 정점별로 분리집합을 생성한다(각 루트 노드의 값은 자기 자신임).
    for (int i : views::iota(0, ssize(disjointSet)))
    {
        disjointSet[i] = i;
    }

    // 합치기
    doUnion(0, 1);
    doUnion(1, 2);

    // 0과 1이 같은 집합에 속한 상태인지 확인
    println("{}", doFind(0) == doFind(1));
}

void Case02()
{
    // 정점별로 분리집합을 생성한다(각 루트 노드의 값은 자기 자신임).
    for (int i : views::iota(0, ssize(disjointSet)))
    {
        disjointSet[i] = i;
    }

    // 합치기
    doUnion(0, 1);
    doUnion(2, 3);

    // 0과 1이 같은 집합에 속한 상태인지 확인
    println("{}", doFind(0) == doFind(1));
    
    // 0과 2가 같은 집합에 속한 상태인지 확인
    println("{}", doFind(0) == doFind(2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Case01();
    Case02();

    return 0;
}
