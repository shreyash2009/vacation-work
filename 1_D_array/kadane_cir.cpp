#include <bits/stdc++.h>
using namespace std;
int arr[]={6,2,5,5,4,5,6,3,7,6};
vector<int> ans;

void calculate(int x){
    if(x == 0){
        return;
    }
    
    int r= x%10;
    calculate(x/10);
    ans.push_back(r);
}
int Nom(){
    vector<int> ::iterator it;
    int sum=0;
    for(it=ans.begin(); it<ans.end(); it++){
        sum+= arr[ans[*it]];
    }
    return sum;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    ans.clear();
	    int A,B;
	    cin>>A>>B;
	    int x= A+B;
	    calculate(x);
	    cout<<Nom()<<endl;
	}
	return 0;
}