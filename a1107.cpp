#include<iostream>
using namespace std;

int main(){
	int q; cin>>q;
	for (int j = 0; j < q; j++){
		int n; cin>>n;
    string s; cin>>s;
	if(n==2){
		if(s[0]<s[1]){
			cout<<"YES"<<endl;
			cout<<2<<endl;
			cout<<s[0]<<" "<<s[1]<<endl;}
		else{
		cout<<"NO"<<endl;
		}
	}
	else{
	cout<<"YES"<<endl;
	cout<<2<<endl;
	cout<<s[0]<<" "<<s.substr(1,n-1)<<endl;
	}
}
}
