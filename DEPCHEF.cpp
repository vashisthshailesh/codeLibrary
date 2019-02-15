#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t; cin>>t;
	for (int i= 0; i < t; i++){
		int n ; cin>>n;
		int a[200],b[200];
		for (int j = 0 ; j < n; j++)
			cin>>a[j];
		for (int j = 0 ; j < n; j++)
			cin>>b[j];
		int ma = -1, d = 0;
		for (int j = 0 ; j < n; j++){
			d = -a[(j-1+n)%n] + b[j] - a[(j+1)%n];
			if(d>0){
				ma = max(b[j],ma);
			}
		}
		cout<<ma<<endl;
	}
}
