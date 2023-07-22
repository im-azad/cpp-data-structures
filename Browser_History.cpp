#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *temp = head;
    if (head != NULL)
    {
        cout << "L -> ";
    }

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    if (head != NULL)
    {
        cout << endl;
    }
}
void print_reverse(Node *tail)
{
    Node *temp = tail;

    if (tail != NULL)
    {
        cout << "R -> ";
    }

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    if (tail != NULL)
    {
        cout << endl;
    }
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

// size calculation
int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// insert at head
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

// inset at tail
void inset_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {

        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
        }
        else if (pos == size(head))
        {
            inset_tail(head, tail, val);
        }
        else if (pos < size(head))
        {
            insert_at_position(head, pos, val);
        }

        if (pos < size(head))
        {
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}
