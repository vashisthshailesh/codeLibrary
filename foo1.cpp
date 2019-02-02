#include<iostream>
#include<string>
using namespace std;

const int N= 1e5+4;
void recur(string s ,char a, char b , int i,int n){
	
	if(i==n){
		cout<<s<<endl;
	
	}

	else{
		recur(s + a, a, b, i+1,n);
		recur(s+b, a, b, i+1,n);
	}
}

int main(){
	string s="";
	int a,b,n; cin>>a>>b>>n;
	char  x = '0' + a;
	char  y = '0' + b;
	recur(s,x,y,0,n);
}
