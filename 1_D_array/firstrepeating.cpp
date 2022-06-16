#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];

     }

     int MinId=INT_MAX, idx[n+1];
     for(int i=0;i<n+1;i++){
         idx[i]=-1;
     }

    int i=0;
    while(i<n){
        if(idx[arr[i]] == -1){
            idx[arr[i]] = i;
        }
        else{
            MinId= min(MinId, idx[arr[i]]);
        }
        i++;
    }

    if(MinId==INT_MAX){
        cout<<"-1"<<endl;
    }
    cout<<MinId<<endl;
    return 0;
}