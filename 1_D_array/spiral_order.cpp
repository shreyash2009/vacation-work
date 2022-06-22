#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int top= 0, left=0,right=col-1, bottom=row-1;
    int d=0;                                    //d=0 from left to right d=1 top to bottom d=2 rigth to lefft d=3 bottom to ttop

    while(top<=bottom && left<=right){
        if(d==0){
            for(int i=left; i<=right;i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
            d=(d+1)%4;
        }
        else if(d==1){
            for(int i=top;i<=bottom;i++){
                cout<<arr[i][right]<<" ";
            }
            right--;
            d=(d+1)%4;
        }
        else if(d==2){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            d=(d+1)%4;
            bottom--;
        }
        else if(d==3){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            d=(d+1)%4;
            left++;
        }
    }

    return 0;
}