#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {101, 20, 30, 20, 40, 90, 20};

    cout << myList.front(); // head 101
    // cout << myList.back(); // tail 20

    // cout << *next(myList.begin(), 3); // 3 number index value =20

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}
