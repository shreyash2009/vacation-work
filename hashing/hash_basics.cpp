#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    // unorderedd map
    unordered_map <int, char>mp;
    mp.insert({2,'B'});
    mp.insert({1,'A'});
    mp.insert({5,'E'});
    cout<<"Before updation\n";
    unordered_map<int, char> ::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    mp[2]='Y';
    cout<<"After updation\n"<<endl;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // ordered map
   map <int, char>m;
    m.insert({2,'B'});
    m.insert({1,'A'});
    m.insert({5,'E'});
    cout<<"Before updation\n";
    map<int, char> :: iterator j;
    for(j=m.begin();j!=m.end();j++){
        cout<<j->first<<" "<<j->second<<endl;
    }

    m[2]='Y';
    cout<<"After updation\n"<<endl;
    for(j=m.begin();j!=m.end();j++){
        cout<<j->first<<" "<<j->second<<endl;
    }
    return 0;
}