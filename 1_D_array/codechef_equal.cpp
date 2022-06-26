#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map <int,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
	    
	    unordered_map<int,int> ::iterator it;
	    int ans=INT_MIN;
	    for(it=mp.begin();it!=mp.end();it++){
	        ans=max(ans,it->second);
	    }
	    
	    cout<<n-ans<<endl;
	}
	return 0;
}
