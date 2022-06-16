// Given a array of N strings, find the longest common prefix among all strings present in the array.


// Example 1:

// Input:
// N = 4
// arr[] = {geeksforgeeks, geeks, geek,
//          geezer}
// Output: gee
// Explanation: "gee" is the longest common
// prefix in all the given strings.

string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans=arr[0];
        for(int i=1;i<N;i++){
            string c=arr[i];
            for(int j=0;i<ans.length();j++){
                if(ans[j]!=c[j]){
                    ans = ans.substr(0,j);
                    break;
                }
            }
        }
        if(ans.empty()){
            return "-1";
        }
        return ans;
    }


#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestCommonPrefix(arr, n);
    return 0;
}