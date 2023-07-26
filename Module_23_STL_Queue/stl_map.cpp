#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"Khan", 99});
    mp.insert({"Alu", 199});

    mp["Sakib al hasn"] = 79; // O(logN)
    mp.insert({"akib", 100});
    mp.insert({"akib", 150});
    mp["tamim"] = 79;
    mp["mush"] = 45;

    // value print
    for (auto it = mp.begin(); it != mp.end(); it++) // total n value ar k O(N log N )
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    cout << "value of khan === " << mp["Khan"] << endl;
    cout << "print value exist or not " << endl;
    cout << mp.count("akib") << endl;
    return 0;
}