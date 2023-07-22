#include <bits/stdc++.h>
using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *input_tree()
// {
//     int val;
//     cin >> val;
//     Node *root;
//     if (val == -1)
//         root = NULL;
//     else
//         root = new Node(val);
//     queue<Node *> q;
//     if (root)
//         q.push(root);
//     while (!q.empty())
//     {
//         // 1. ber kore ano
//         Node *p = q.front();
//         q.pop();

//         // 2. jabotiyo ja kaj ache
//         int l, r;
//         cin >> l >> r;
//         Node *myLeft;
//         Node *myRight;
//         if (l == -1)
//             myLeft = NULL;
//         else
//             myLeft = new Node(l);
//         if (r == -1)
//             myRight = NULL;
//         else
//             myRight = new Node(r);

//         p->left = myLeft;
//         p->right = myRight;

//         // 3. children gulo ke push koro
//         if (p->left)
//             q.push(p->left);
//         if (p->right)
//             q.push(p->right);
//     }
//     return root;
// }
// int count_leaf(Node *root)
// {
//     queue<int> q;
//     int m, n;
//     if (root == NULL)
//         return 0;
//     if (root->left == NULL && root->right == NULL)
//     {

//         return root->val;
//     }
//     else
//     {
//         count_leaf(root->left);
//         count_leaf(root->right);
//     }
// }
// int main()
// {
//     Node *root = input_tree();
//     cout << count_leaf(root) << " " << endl;

//     return 0;
// }

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void max_min_leaf(Node *root, int &maxLeaf, int &minLeaf)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {

        // Leaf node value get and update the value max and min leaf
        maxLeaf = max(maxLeaf, root->val);
        minLeaf = min(minLeaf, root->val);
        return;
    }

    max_min_leaf(root->left, maxLeaf, minLeaf);
    max_min_leaf(root->right, maxLeaf, minLeaf);
}

int main()
{
    Node *root = input_tree();
    int maxLeaf = INT_MIN;
    int minLeaf = INT_MAX;

    max_min_leaf(root, maxLeaf, minLeaf);
    cout << maxLeaf << " " << minLeaf << endl;

    return 0;
}
