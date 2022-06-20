#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{

    //maxHeap
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(1);
    pq.push(3);
    cout<<pq.top()<<endl;


    //minHeap
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(2);
    p.push(1);
    p.push(3);
    cout<<p.top()<<endl;

    return 0;
}