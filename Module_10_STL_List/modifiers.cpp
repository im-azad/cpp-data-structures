#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    // list<int> newList;
    // newList = myList; // value assign
    // newList.assign(myList.begin(), myList.end());

    // push back
    // myList.push_back(100);

    // push_front
    // myList.push_front(200);

    // pop_front
    // myList.pop_back();
    // myList.pop_back();

    // pop_front
    // myList.pop_front();
    // myList.pop_front();

    // insert at position
    // myList.insert(next(myList.begin(), 2), 100); // 100 value insert on 2 index,
    // myList.insert(next(myList.begin(), 2), {100,200,300}); // multi value insert on 2 index,
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end()); // another list insert on 2 index,
    // next diya loop through kore and cycle lopp korbe size arr pos bor hola

    // delete O(N);
    // myList.erase(next(myList.begin(), 2));

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}
