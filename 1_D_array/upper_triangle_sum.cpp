#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            cin>>arr[i][j];
        }
    }
    for (int  i = 0; i < n; i++)
    {
        /* code */

        for(int j =i+1;j<m;j++){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
        }
        
    }
    
    cout<<sum<<endl;

    return 0;
}