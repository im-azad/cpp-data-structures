#include <bits/stdc++.h>
using namespace std;
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
// INPUT get
Node *input_tree()
{
    int val;
    cin >> val;
    // root input
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    // create a queue and push root
    queue<Node *> q;

    if (root)
        q.push(root); // root push on queue
    while (!q.empty())
    {
        Node *p = q.front(); // get parent node
        q.pop();

        // work here most task
        int l, r;
        cin >> l >> r;
        Node *newLeft;
        Node *newRight;
        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);
        if (r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);
        // connection left and right
        p->left = newLeft;
        p->right = newRight;

        // push children in queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{

    if (root == NULL) // check root null ki na
    {
        cout << "Tree nai" << endl;
        return;
    }
    // ata queue ni
    queue<Node *> q;
    q.push(root); // fast root push queue

    while (!q.empty()) // queue empty na hoya porjonto cholbe
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}
