// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int ans=0,sum=0;
        unordered_map<int,int> mp;                      //will store sum till i <sum,i>
        for(int i=0;i<n;i++){
            sum+=A[i];                                  //calculate prefix sum
            if(sum==0){                                    //if sum till i is zero that means sum till curr is 0 which will be max think about it
                ans= i+1;
            }
            else{
                if(mp.find(sum)!=mp.end()) {            //find curr sum already exists or not if it exists update ans
                    ans= max(ans, i- mp[sum]);
                }
                else{
                    mp[sum]=i;                          //otherwise insert new sum till  i and its index value
                }
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends