// #include <bits/stdc++.h>
// #include<vector>
// #include<queue>
// #include<stack>
// using namespace std;
// //driver code
// int main()
// {
//     // lonngest airthmatic subarray
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int curr= 2, pd=arr[1]-arr[0], ans= INT_MIN;
//     int i=2;
//     while(i<n){
//         if(pd == arr[i]- arr[i-1]){
//             curr++;
//             ans = max(ans, curr);
//         }
//         else{
//             curr=2;
//         }
//         i++;

//     }

//     cout<<"Longest arithematic subarray length is:- "<<ans<<endl; 

//     return 0;
// }


//equal
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n*2];
	    int e=0,o=0;
	    for(int i=0;i<(n*2);i++){
	        cin>>arr[i];
	        if(arr[i]%2 == 0){
	            e++;
	        }
	        else{
	            o++;
	        }
	    }
	    
	        
	    cout<<(max(e,o)-(n))<<endl;
	    
	    
	}
	return 0;
}



///
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n; 
// 	    cin>>n;
// 	    int sum =0;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	        sum+=arr[i];
// 	    }
// 	    sum = sum/(n+1);
// 	    for(int i=0;i<n;i++)
// 	        cout<<arr[i]-sum<<" ";
// 	    cout<<endl;
// 	}
// 	return 0;
// }
