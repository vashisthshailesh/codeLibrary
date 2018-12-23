#include<iostream>
#include<algorithm>
using namespace std;

void quickSort(int *a,int li,int ri){
	if (li >= ri){
		return;
	}
	int j = 0 ;
	for (int i= li; i < ri; i++){
		while (a[j+li] < a[ri] && j+li<ri ){
			j++;
		}
		if(a[i]<a[ri] && i>j+li){
			swap(a[i],a[j+li]);
			j++;
		}
	}
	swap(a[j+li],a[ri]);
	quickSort (a, li, j-1+li );
 	quickSort (a, j+1+li, ri )	;
}

int main(){
	int n;
	cin>>n;
	int *a = (int*) malloc( n*(sizeof(int)) );
	for ( int i =0;i<n;i++){
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " " ;
	cout << endl;
}
