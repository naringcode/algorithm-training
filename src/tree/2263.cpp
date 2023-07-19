#include <bits/stdc++.h>

using namespace std;

// 트리의 요소가 확실하게 결정되는 지점이 있을 것이다.
// 중위 순회, 후위 순회가 주어졌을 때 -> 전위 순회를 출력
//
// 트리를 만들고 출력?
// 중위 순회하고 후위 순회를 돌면서 전위 순회 출력 가능?
//
// 전위 순회와 후위 순회에선 확실하게 루트 노트를 파악할 수 있다.
// 루트 노드를 파악하면 중위 순회에서 어디에 루트의 위치를 파악 가능
//
// 중위 순회에서 루트 노드를 파악할 수 있으면 왼쪽은 왼쪽 서브트리, 오른쪽은 오른쪽 서브트리
// inLeft, inRight, postLeft, postRight를 두고 반복?
//
// 후위를 기반으로 중위에서 루트 노드를 파악해야 하는데
// 만약에 루트가 매번 맨끝에 있는 상황이라면 최악의 시간복잡도가 나올 것 같은.
// 후위 순회의 값을 바로 중위에서의 인덱스로 참조할 수 있게 만들어야 할 듯?

int n;

int inorder[100'004]; // in : 중위
int inorderIndices[100'004]; // 후위 순회에서 구한 값을 바로 인덱스로 참조하기 위함

int postorder[100'004]; // post : 후위

void go(int inLeft, int inRight, int postLeft, int postRight)
{
    // 전위는 방문한 노드를 먼저 처리 후 -> 왼쪽 서브트리 -> 오른쪽 서브트리
    // 매번 분할 정복을 위해 루트 노드를 찾는 것이 먼저니까 출력해도 될 듯
    if (inLeft > inRight || postLeft > postRight)
        return;

    int pivot = inorderIndices[postorder[postRight]];

    int lSize = pivot - inLeft;
    int rSize = inRight - pivot;

    cout << postorder[postRight] << ' ';

    // 왼쪽 서브트리
    go(inLeft, pivot - 1, postLeft, postLeft + lSize - 1);

    // 오른쪽 서브트리
    go(pivot + 1, inRight, postRight - rSize, postRight - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> inorder[i];

        // 값을 인덱스로(후위로 구한 루트 노드의 탐색 시간을 1로 만들기 위함)
        inorderIndices[inorder[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> postorder[i];
    }

    go(0, n - 1, 0, n - 1);

    return 0;
}