// 1 2 3                7 4 1
// 4 5 6        =>      8 5 2
// 7 8 9                9 6 3

// logic:- if you write output array in input order you will notice the  array is written from bottom to top for each coloum 




#include <bits/stdc++.h>

using namespace std;
//driver code
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int  j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}