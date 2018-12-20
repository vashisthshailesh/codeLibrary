#include <algorithm>
#include <iostream>

using namespace std;
int main(){
	int a[111];
	int n;
	cin>>n;
	for ( int i = 1 ; i <= n ;i++){
		cin>>a[i];}
for(int j =1 ; j<=n ; j++){
		for(int k =1 ; k <= n - j ; k++){
			if(a[k] > a[k+1]){
				swap(a[k], a[k+1]);
			}
		}
	}
	for(int l =1 ; l<=n ;l++){
		cout<<a[l];
	}
}

