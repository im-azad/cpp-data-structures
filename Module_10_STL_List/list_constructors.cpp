#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  way-1 O(N)
    // list<int> myList;
    // cout << myList.size(); // size 0;

    //  way-2
    // list<int> myList(10);
    // cout << myList.size(); // size 10;

    //  way-3
    // list<int> myList(10, 5);
    // cout << myList.size() << endl; // size 10 and value all 5;

    // // link list print by iterator
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " "; //print value: 5 5 5 5 5 5 5 5 5 5
    // }

    // list copy
    // complexity o(n)
    // list<int> myList2 = {1, 2, 3, 4, 5};
    // list<int> myList(myList2);
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " "; // print value: 1 2 3 4 5
    // }

    // copy an array value
    // int a[5] = {10, 20, 30, 40, 50};
    // list<int> myList(a, a + 5); //(a+a+n)=> n=array size

    // copy an victor
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> myList(v.begin(), v.end()); // surr and shes ar pointer dite hobe

    // print value for loop
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " "; // print value: 100 200 300 400 500
    // }

    // Range based for loop

    for (int val : myList)
    {
        cout << val << " "; // print value: 100 200 300 400 500
    }

    return 0;
}
