#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {
        10,
        20,
        30,
        40,
        50,
    };
    // cout << myList.size();

    // cout << myList.max_size();

    // myList.clear();
    // clear list

    myList.resize(3);
    myList.resize(5, 100); // print 10 20 30 (100 100)initial

    cout << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}
