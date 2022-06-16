#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    string s="ABSHDDKJJ";
    for(int i=0; i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){                     //'a' -'A' = 32
            s[i] +=32;
        }
    }
    cout<<s<<endl;


    // built-in function
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}