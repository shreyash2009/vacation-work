#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string A,B;
	    cin>>A>>B;
	    int A1[26], A2[26];
	    for(int i=0;i<26; i++){
	        A2[i]=0;
	        A1[i]=0;
	    }
	    sort(A.begin(), A.end());
	    sort(B.begin(), B.end());
	    for(int i=0; i<n;i++){
	        A1[A[i]-'a']++;
	        A2[B[i]-'a']++;
	    }
	    int ans=0;
	    for(int i=0;i<26;i++){
	        if(!A1[i] && !A2[i]){
	            ans++;
	        }
	    }
	    cout<<(26-ans)/2<<endl;
	}
	return 0;
}