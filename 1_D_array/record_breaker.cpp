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

    int ans=1,max=arr[0];
    int i=0;
    while(i<n){
        if(max<arr[i]){
            max= arr[i];
            ans++;
        }
        i++;
    }

    cout<<"No. of record breaker days are:-"<<ans<<endl;
    return 0;
}