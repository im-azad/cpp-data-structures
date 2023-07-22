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
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    // position posjonto loop cholbe print korbe
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // cout << temp->val << endl; // print value ==20
    newNode->next = temp->next;    // connect newNode ar next ar temp ar next 100->30
    temp->next = newNode;          // 20->100
    newNode->next->prev = newNode; // 100 <- 30
    newNode->prev = temp;          // 20 <- 100
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
    Node *newNode = new Node(val); // create new node
    // check fast head jodi null hoi
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return; // next code ar run hob a na
    }
    // connection update
    newNode->next = head;
    head->prev = newNode;
    // update main hade by reference value
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
        return; // next code ar run hob a na
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;

    /* Node create */

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // Connection

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    // print_normal(head);
    // print_reverse(tail);
    // insert_at_position(head, 2, 100);

    int pos, val;
    cin >> pos >> val;
    if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        inset_tail(head, tail, val);
    }
    else if (pos >= size(head)) //
    {
        cout << "INVALID" << endl;
    }
    else
    {
        insert_at_position(head, 2, 100);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}
