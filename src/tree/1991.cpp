#include <bits/stdc++.h>

using namespace std;

pair<char, char> adj[26];

char ch[3];

int n;

void preorder(char node)
{
    cout << char(node + 'A');

    if ('.' != adj[node].first)
    {
        preorder(adj[node].first - 'A');
    }

    if ('.' != adj[node].second)
    {
        preorder(adj[node].second - 'A');
    }
}

void inorder(char node)
{
    if ('.' != adj[node].first)
    {
        inorder(adj[node].first - 'A');
    }

    cout << char(node + 'A');

    if ('.' != adj[node].second)
    {
        inorder(adj[node].second - 'A');
    }
}

void postorder(char node)
{
    if ('.' != adj[node].first)
    {
        postorder(adj[node].first - 'A');
    }

    if ('.' != adj[node].second)
    {
        postorder(adj[node].second - 'A');
    }

    cout << char(node + 'A');
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ch[0] >> ch[1] >> ch[2];

        ch[0] -= 'A';

        adj[ch[0]].first  = ch[1];
        adj[ch[0]].second = ch[2];
    }

    preorder(0);

    cout << '\n';

    inorder(0);

    cout << '\n';

    postorder(0);

    return 0;
}
