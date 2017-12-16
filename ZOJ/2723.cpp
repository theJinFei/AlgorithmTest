#include <iostream>
#include <vector>
#include <set>
#include <string.h>
using namespace std;
vector<int> v;
set<int> s;

void prime(const int & a, const int & b)
{
    for(int i = a; i <= b; i++)
    {
        if(i != 2 && i % 2 == 0)
            continue;
        for(int j = 3; j*j <= i; j++)
        {
            if(i % j == 0)
                goto RL;
        }
        v.push_back(i);
        RL: continue;
    }
}
int main()
{
    prime(2, 500000);

    int m;
    for(int i = 0; i < v.size(); i++)
        for(int j = 0; j < v.size(); j++)
    {
        m = v[i]*v[j];
        if(m < 1000000)
            s.insert(m);
        else
            break;
    }

    set<int>::iterator p;
    int n;
    while(cin >> n)
    {
        p = s.find(n);
        if(p != s.end())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
