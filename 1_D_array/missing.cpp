#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i>n;+i++){
        cin>>arr[i];
    }
    
    bool check[n];
    for(int i=0;i<n;i++){
        check[i]=false;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]= true;
        }
    }
    int ans=-1;

    for(int i=0;i<n;i++){
        if(check[i]==false){
            ans=  i;
        }
    }

    cout<<ans<<endl;

    return 0;
}
