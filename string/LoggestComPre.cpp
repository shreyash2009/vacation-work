#include <bits/stdc++.h>
using namespace std;
string check(string ans, string c){
        if(ans.size()> c.size()) swap(ans,c);
        
        string ok="";
        for(int i=0;i<ans.length();i++){
            if(ans[i]==c[i]){
                ok.push_back(ans[i]);
            }
            else{
                break;
            }
        }
        return ok;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans= strs[0];
        
        for(int i=1;i<strs.size();i++){
            ans= check(ans, strs[i]);
        }
        return ans;
    }
//driver code
int main()
{
    vector<string> v={"flower","flow","flight"};
    cout<<longestCommonPrefix(v);

    return 0;
}