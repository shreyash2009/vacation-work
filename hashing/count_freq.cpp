#include <bits/stdc++.h>
using namespace std;
//driver code
int main()
{
    unordered_map<int, int> mp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        mp[arr[i]]++;
    }
    unordered_map<int, int> ::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<"-> "<<it->second<<endl;
    }
    

    return 0;
}