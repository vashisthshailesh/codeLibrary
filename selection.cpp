#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n ,p ,a[100] ;
	cin>>n;
	for(int i =1 ; i <= n ; i++)
		cin>>a[i];
	for(int j =1 ; j<=n ;j++){
		p=j;
		for (int k=j ; k<=n-1; k++){
			if(a[k]>a[k+1]){
				p=k+1;
			}	
		}
		swap(a[j],a[p]);
		}
for(int l=1;l<=n;l++)
	cout<<a[l]<<"  ";
}
