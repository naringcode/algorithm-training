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
int nodeRanks[1004];

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

// x 집합을 y 집합에 연결한다.
bool doUnion(int x, int y)
{
    // x의 값과 y의 값이 전부 분리집합에 속해 있다고 가정한다.
    x = doFind(x); // 집합의 루트 값으로 갱신함.
    y = doFind(y); // 집합의 루트 값으로 갱신함.

    // 같은 집합에 속해 있다.
    if (x == y)
        return false;

    // 랭크 자체를 기록하는 과정에서 해당 값은 계속 커질 수 있지만, 반대로 작아질 일은 없다.
    // 따라서 Find를 통한 경로 압축 과정에서 Rank가 역전하는 현상이 발생하는 것을 우려할 수 있는데,
    // 이러한 현상이 발생하여 Rank의 추정치가 조금 부정확해진다고 해도 최적화 효과 자체를 잃는 것은 아니다.
    // 랭크는 경로 압축을 위한 보조지표(?), 높이의 추정치 정도로만 보도록 하자.

    // 루트 노드가 다를 경우 랭크(높이)를 비교한 다음 합친다.
    // 랭크가 낮은 트리가 높은 쪽에 붙는다(랭크가 작은 트리가 큰 쪽에 붙어야 높이가 최소화되어, Find 연산이 최적화됨).
    if (nodeRanks[x] < nodeRanks[y]) // x의 루트 랭크 < y의 루트 랭크
    {
        disjointSet[x] = y;
    }
    else if (nodeRanks[x] > nodeRanks[y]) // x의 루트 랭크 > y의 루트 랭크
    {
        disjointSet[y] = x;
    }
    else // if (nodeRanks[x] == nodeRanks[y]) // x의 루트 랭크 == y의 루트 랭크
    {
        // 랭크가 같으면 루트 노드의 랭크를 증가(값이 같은 것이 아닌 랭크가 같은 상황임)
        disjointSet[y] = x; // x가 루트임.
        nodeRanks[x]++;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 정점별로 분리집합을 생성한다(각 루트 노드의 값은 자기 자신임).
    for (int i : views::iota(0, ssize(disjointSet)))
    {
        disjointSet[i] = i;
    }

    // rank 1 ->       (1)
    // rank 0 ->   (2) (3) (4)
    // doUnion(1, 2);
    // doUnion(1, 3);
    // // doUnion(2, 4); // 이 코드의 경우 노드 2의 루트에 노드 4가 붙는 것이기에 노드 1의 랭크는 여전히 1임.

    // rank 2 ->     (1)
    // rank 1 ->   (2) (3)
    // rank 0 -> (4)
    // 이러한 랭크를 의도하고자 한다면? 일단 순서를 잘 맞춰야 한다.
    // 주의 : (2, 4) -> (1, 2) -> (1, 3) 순서로 하면 노드 1의 랭크는 여전히 1로 표현된다(직접 그려서 노드를 연결해봐야 알 수 있는 부분임).
    doUnion(1, 3);
    doUnion(2, 4);
    doUnion(1, 2); // 분리집합은 먼저 만든 다음 합쳐야 함(1과 2의 랭크가 같은 상황에서 합치면 1의 랭크가 하나 증가함).

    // rank 1 ->   (5)
    // rank 0 -> (6) (7)
    doUnion(5, 6);
    doUnion(5, 7);

    // 노드 1의 랭크가 노드 5의 랭크보다 크다.
    // 따라서 노드 5가 노드 1 쪽으로 합쳐진다.
    doUnion(1, 5);
    
    return 0;
}
