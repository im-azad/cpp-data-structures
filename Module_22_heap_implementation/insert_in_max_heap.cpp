
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    vector<int> v = {50, 10, 30, 20};

    int x;
    cin >> x;
    v.push_back(x);
    int current_index = v.size() - 1;
    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[parent_index] < v[current_index])
            swap(v[parent_index], v[current_index]);
        else
            break;
        current_index = parent_index;
    }

    for (int val : v)
        cout << val << " ";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (v[parent_idx] < v[cur_idx])
                swap(v[parent_idx], v[cur_idx]);
            else
                break;
            cur_idx = parent_idx;
        }
    }

    for (int val : v)
        cout << val << " ";
    return 0;
}