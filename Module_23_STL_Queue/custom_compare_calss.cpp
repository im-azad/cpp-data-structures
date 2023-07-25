#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};

// create a class
class cmp
{
public:
    bool operator()(Student a, Student b) // must need bool function name operator
    {                                     // operator()-- () overload kore
        if (a.marks > b.marks)            // bam pas soto chile, bam pas bor < hob
            return true;
        else if (a.marks < b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    // custom data type
    priority_queue<Student, vector<Student>, cmp> pq; // amar data type, vector same data type, public class cmp
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    // print queue value
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}