#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query;
    cin >> query;

    while (query--)
    {
        stack<char> sta;
        int size;
        cin >> size;
        char st[size];
        cin >> st;

        for (char ch : st)
        {

            sta.push(ch);
            if (sta.top() == 'R' && ch == 'B')
            {
                sta.pop();
                sta.push('P');
            }
            if (sta.top() == 'R' && ch == 'G')
            {
                sta.pop();
                sta.push('Y');
            }
            if (sta.top() == 'B' && ch == 'G')
            {
                sta.pop();
                sta.push('C');
            }
            if (sta.top() == 'R' && ch == 'R' || sta.top() == 'G' && ch == 'G' || sta.top() == 'B' && ch == 'B')
            {
                sta.pop();
            }
            cout << sta.top() << endl;
        }
        stack<char> newSta;
        while (!sta.empty())
        {

            cout << sta.top() << endl;
            sta.pop();
        }
        // for (char c : s)
        // {

        //     if (sta.top() == 'B', c == 'A')
        //     {
        //         sta.pop();
        //     }
        // }

        // if (sta.empty())
        // {

        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}