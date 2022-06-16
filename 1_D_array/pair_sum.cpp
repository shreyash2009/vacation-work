#include <bits/stdc++.h>
using namespace std;
// brute force approch
bool pairsum(int a[], int n, int k){

    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(a[i]+a[j]==k){
                return true;
            }
        }
    }
    return false;
}


// optimized approch
bool Op_pairsum(int a[], int n, int k ){
    sort(a, a+n);
    int s=0,e=n-1;
    while(s<e){
        if(a[s]+a[e]>k){
            e--;
        }
        else if(a[s]+a[e]<k){
            s++;
        }
        else{
            return true;
        }
    }
    return false;
}
//driver code
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    // Brute force approch
    cout<<pairsum(a,n,k)<<endl;



    // Optimized approch if index not required if required you can use another array to store the index value then sort the array
    cout<<Op_pairsum(a,n,k)<<endl;

    return 0;
}