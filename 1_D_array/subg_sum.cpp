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
    int s;
    cin>>s;
   //main logic (optimised approach)
    int j=0;
    int sum =0;

    for(int i=0; i<=n; i++){
        if(sum<s){
            sum+=arr[i];
        }
        else if(sum>s){
            sum-=arr[j];
            i--;
            j++;
        }
        else{
            cout<<j+1<<" "<<i<<endl;
            return 0;
        }
    }
    cout<<"No subarrays add up to the given sum"<<endl;
    return 0;
}
    

