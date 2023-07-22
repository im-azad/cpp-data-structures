#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {101, 20, 30, 20, 40, 90, 20};
    // myList.remove(20); // remove all 20 value

    // sort
    // myList.sort(); // soto thake boro
    // myList.sort(greater<int>()); // boro thake soto

    // multiple value remove if sort
    // myList.unique();

    // reverse
    myList.reverse();

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}
