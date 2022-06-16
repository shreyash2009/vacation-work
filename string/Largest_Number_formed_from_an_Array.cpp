#include <bits/stdc++.h>
using namespace std;
//driver code
bool comp(string a, string b){
    return a+b>b+a;
}
int main()
{
    vector<string> arr={"3"," 30", "34"," 5", "9"};
    sort(arr.begin(), arr.end(), comp);
    string ans;
    for(int i=0;i<arr.size();i++){
        ans+=arr[i];
    }
    cout<<ans<<endl;

    return 0;
}