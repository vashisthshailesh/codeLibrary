#include<iostream>
using namespace std;
const int N= 1e5+10;
int main(){
	int t ; cin  >> t;
	for(int i = 0; i < t; i++){
		long long n ,a[N] ,ans = 0; cin>>n;
		for (int j = 0; j < n; j++){
			cin>>a[j];
			ans+=a[j]-1;
		}
	cout<<ans+1<<endl;	
	}
}
