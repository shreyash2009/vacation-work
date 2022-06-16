// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int n=s.length();
    string ans;
    vector<char> ch;
    for(int i=0;i<n;i++){
        if(find(ch.begin(),ch.end(),s[i])!=ch.end()){                           //find functions return iterator to first occurence of searched element if not it gives pointer to last element
                                                                                //in this line its checcking occurence to make sure it is not pointing to end 
            ans=s[i];
            return ans;
        }
        ch.push_back(s[i]);
    }
    return "-1";
    
}