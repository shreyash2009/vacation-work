// #include <bits/stdc++.h>
// using namespace std;
// //driver code
// int main()
// {
//     string s ="dahgdagdcakbsdvjgakh";
//     char freq[26];
//     for(int i=0;i<26;i++){
//         freq[i]=0;
//     }

//     for(int i=0;i<s.size();i++){
//         freq[s[i]-'a']++;
//     }
//     int m=INT_MIN;
//     for(int i=0;i<26;i++)
//         m=max(m, freq[i]);

//     cout<<m<<endl;

//     return 0;
// }



// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
// Your task is simple. Given a string, you need to tell if it is a lapindrome.





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string s;
// 	    cin>>s;
// 	    int n= s.length();
// 	    int a1[26],a2[26];
// 	    for(int i=0;i<26;i++){
// 	        a1[i]=0;
// 	        a2[i]=0;
// 	    }
	    
// 	    if(n%2==0){
// 	        for(int i=0;i<n%2;i++){
// 	            a1[s[i]-'a']++;
// 	        }
// 	        for(int i=n%2; i<n;i++){
// 	            a2[s[i]-'a']++;
// 	        }
// 	    }
// 	    else{
// 	        for(int i=0;i<n%2;i++){
// 	            a1[s[i]-'a']++;
// 	        }
// 	        for(int i=n%2 +1;i<n;i++){
// 	           a2[s[i]-'a']++;
// 	        }
// 	    }
// 	    for(int i=0;i<26;i++){
// 	        if(a1[i!=a2[i]]){
// 	            cout<<"NO"<<endl;
// 	            return 0;
// 	        }
// 	    }
// 	    cout<<"YES"<<endl;
// 	}
// 	return 0;
// }



// another solution
#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.size();
        string s1,s2;
        for(int i=0;i<n%2;i++){
            s1+=s[i];
            s2+=s[n-i-1];
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}