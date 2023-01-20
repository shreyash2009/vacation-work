#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
        unordered_map <char,int> mp;
       mp['I']= 1;
    mp['V']= 5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
        

        int sum= mp[s[s.length()-1]];
        
        for(int i= s.length()-2;i>=0;i--){
            if(mp[s[i]] < mp[s[i+1]]){
                sum = sum-mp[s[i]];
            }
            else{
                sum+=mp[s[i]];
            }
        }
        return sum;
    }
//driver code
int main()
{
    cout<<romanToInt("III")<<endl;

    return 0;
}