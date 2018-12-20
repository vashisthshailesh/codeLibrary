#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,j, a[100], p;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i < n ; i++){
		p = a[i];
		j=i-1;
		while((p<a[j]) && (j>=0)){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=p;
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}}
