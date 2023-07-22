#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query;
    cin >> query;

    while (query--)
    {
        stack<char> sta;
        string s;
        cin >> s;
        for (char ch : s)
        {
            sta.push(ch);
            if (sta.top() == 'A' && ch == 'B')
            {
                sta.pop();
            }
            if (sta.top() == 'B', ch == 'A')
            {
                sta.pop();
            }
        }

        for (char c : s)
        {

            if (sta.top() == 'B', c == 'A')
            {
                sta.pop();
            }
        }

        if (sta.empty())
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}