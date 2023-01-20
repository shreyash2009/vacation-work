#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
         cin>>arr[i];
    }



    // Approch 1   O(N^3)
    int ans=INT_MIN;
    int s =-1, e=-1;

    for(int i=0;i<n; i++){
        for(int j=i;j<n;j++){
        int sum=0;
            for (int k = i; k <j; k++)
            {
               
            
            sum = sum + arr[j];
            if(sum > ans){
                ans= sum;
                s=i;
                e=j;
            }
            }
        }
    }

    cout<<"Sum:- "<< ans<<"start:- "<<s<<"end:- "<<e<<endl;




    // Approch 2 O(N^2)

    // int maxSum=0;

    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum += arr[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // cout<<maxSum<<endl;



    // Kadane's algorithm O(N)

    // int currsum=0;
    // int maxsum=INT_MIN;

    // for(int i=0;i<n;i++){

    //     currsum+=arr[i];
    //     if(currsum<0){
    //         currsum=0;
    //     }
    //     maxsum=max(maxsum, currsum);
    //     cout<<maxsum<<endl;
    // }
    return 0;
}