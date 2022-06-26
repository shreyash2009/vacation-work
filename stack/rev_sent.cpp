#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    string s;
    cin>>s;

    int n= s.size();
    stack<string>st;
    for(int i=0;i<s.length();i++){
       string f="";
       while(s[i]!=' ' && i<s.length()){
        f+=s[i];
        i++;
       }
       st.push(f);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}