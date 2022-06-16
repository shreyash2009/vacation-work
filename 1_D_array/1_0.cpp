#include <bits/stdc++.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
//driver code
int main()
{
    // lonngest airthmatic subarray
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curr= 2, pd=arr[1]-arr[0], ans= INT_MIN;
    int i=2;
    while(i<n){
        if(pd == arr[i]- arr[i-1]){
            curr++;
            ans = max(ans, curr);
        }
        else{
            curr=2;
        }
        i++;

    }

    cout<<"Longest arithematic subarray length is:- "<<ans<<endl; 

    return 0;
}