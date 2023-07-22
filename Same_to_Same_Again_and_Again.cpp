#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = false;

        while (!st.empty())
        {

            if (st.top() != q.front())
            {
                flag = true;
                break;
            }
            st.pop();
            q.pop();
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
        }
    }

    return 0;
}