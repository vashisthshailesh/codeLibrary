#include<iostream>
using namespace std;

int main(){
	int n,x;
	int r,l,y;
	int a[100];
	cin >> n >> x ;
	for (int i=1; i <= n ; i++ ){
		cin>>a[i];
	}
	l = 1;
	r = n;
	while(l!=r){
		y=(l+r)/2;
		if(a[y]>x){
			r=y-1;
		}
		else if (a[y]<x){
			l=y+1;
		}
		else{
			l=r=y;	
		}
		cout<<"y"<<y<<"\n";
		cout<<"a[y]"<<a[y]<<"\n";
	}
	if(a[l]==x){
		cout<<"found the no.";
	}
	else {
		cout<<"did not founf the no.";
	}
}
