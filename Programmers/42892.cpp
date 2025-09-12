#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int id;
    int x;
    int y;
    
    Node* left  = nullptr;
    Node* right = nullptr;
};

void preorder(Node* node, vector<int>& result)
{
    if (node == nullptr)
        return;

    result.push_back(node->id);

    preorder(node->left, result);
    preorder(node->right, result);
}

void postorder(Node* node, vector<int>& result)
{
    if (node == nullptr)
        return;
        
    postorder(node->left, result);
    postorder(node->right, result);
        
    result.push_back(node->id);
}

void addNode(Node* curr, Node* target)
{
    if (curr->x > target->x)
    {
        if (curr->left == nullptr)
        {
            curr->left = target;
        }
        else
        {
            addNode(curr->left, target);
        }
    }
    else
    {
        if (curr->right == nullptr)
        {
            curr->right = target;
        }
        else
        {
            addNode(curr->right, target);
        }
    }
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
    vector<Node> nodes; // y, nodes
    
    for (int idx = 0; idx < nodeinfo.size(); idx++)
    {
        int x = nodeinfo[idx][0];
        int y = nodeinfo[idx][1];
        
        nodes.emplace_back();
        nodes.back().id = idx + 1;
        nodes.back().x = x;
        nodes.back().y = y;
    }

    sort(nodes.begin(), nodes.end(), [](const Node& lhs, const Node& rhs) {
        if (lhs.y == rhs.y)
            return lhs.x < rhs.x;

        return lhs.y > rhs.y;
    });

    for (int idx = 1; idx < nodes.size(); idx++)
    {
        addNode(&nodes[0], &nodes[idx]);
    }

    vector<int> preRes;
    vector<int> postRes;

    preorder(&nodes[0], preRes);
    postorder(&nodes[0], postRes);

    return { preRes, postRes };
}
