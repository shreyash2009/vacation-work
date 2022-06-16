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

    int max=INT_MIN;
    int i =0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
        cout<<i<<" "<<max<<endl;
    }
    return 0;
}