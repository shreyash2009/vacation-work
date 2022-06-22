#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    string s;
    cin>>s;
    int i=0;
    int ans=0;
    while(i<s.size()){
        if(s[i]==' '){
            ans++;
        }
        i++;
    }
    cout<<ans+1<<endl;


    return 0;
}