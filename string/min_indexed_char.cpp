// // { Driver Code Starts
// //Initial template for C++
// Given a string str and another string patt. Find the minimum index of the character in str that is also present in patt.


// Example 1:

// Input:
// str = geeksforgeeks
// patt = set
// Output: 1
// Explanation: e is the character which is
// present in given str "geeksforgeeks"
// and is also presen in patt "set". Minimum
// index of e is 1. 


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        vector<int> v(26,-1);
        for(int i=0;i<str.length();i++){
            if(str[v[i]-'a']==-1){
                str[v[i]-'a']=i;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<patt.length();i++){
            int x;
            if(find(v.begin(),v.end(),patt[i])!=v.end()){
                x=v[i];
                ans=min(ans,x);
            }
            
        }
        if(ans==INT_MAX){
            return -1;
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
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends