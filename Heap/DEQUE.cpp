#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    deque<int> a;
    a.push_back(3);
    a.push_front(6);
    a.push_back(5);
    a.push_front(9);

    cout<<a.back();

    a.pop_back();
    cout<<a.back();


    return 0;
}