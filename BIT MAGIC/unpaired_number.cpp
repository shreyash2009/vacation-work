// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        //c++ solution

//trick :- if there is only one non-duplicate number in ans array,then xor of all numbers with 0 will return us the non-duplicate number,
    
        int ans=0;
        for(int i=0;i<N;i++){
            ans=ans^arr[i];
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
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
}   // } Driver Code Ends