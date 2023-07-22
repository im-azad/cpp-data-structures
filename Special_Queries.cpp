#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query;
    cin >> query;
    queue<string> qu;
    while (query--)
    {
        int n;
        cin >> n;
        string str;
        if (n != 1)
        {
            cin >> str;
        }

        if (n == 1 && qu.empty())
        {
            cout << "Invalid" << endl;
        }
        else if (n == 0)
        {
            qu.push(str);
        }
        else
        {
            cout << qu.front() << endl;
            qu.pop();
        }
    }

    return 0;
}