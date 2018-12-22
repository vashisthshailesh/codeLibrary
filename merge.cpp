#include<iostream>
using namespace std;

void merge(int* l,int* r,int sizel,int sizer, int li,int* a){
	int x,y,k ;
	x=y=k=0;
	while(x<(sizel) && y<(sizer)){
		if(l[x]<r[y]){
			a[li+k]=l[x] ; k++ ; x++ ;
		}
		else {
			a[li+k]=r[y] ; k++ ; y++ ;
		}
	}
	while(x<sizel){
		a[li+k]=l[x] ; k++ ; x++ ;
	}
	while(y<sizer){
		a[li+k]=r[y] ; k++ ; y++ ;
	}
}

void mergeSort(int*a,int li,int ri){
	if (li==ri){
		return ; 
	}
	int midval= (li+ri)/2;
	int sizel = midval - li + 1;
	int sizer = ri - midval;
	int lil=li;
	int ril=midval;
	int lir=midval+1;
	int rir=ri;
	
	int *l = (int*)malloc(sizel*(sizeof(int)));
	int *r = (int*)malloc(sizer*(sizeof(int)));
	
	mergeSort(a,lil,ril);
	mergeSort(a,lir,rir);

	for (int i=0 ; i<sizel ; i++){
		l[i] = a[i+li];
	} 
	for (int i=0 ; i<sizer  ; i++){
		r[i]=a[i+1+midval];
	}

	merge(l,r,sizel,sizer,lil,a);
	free(l);
	free(r);
}

int main(){
	int n;
	cin>>n;
	int *a = (int*) malloc( n*(sizeof(int)) );
	for ( int i =0;i<n;i++){
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " " ;
	cout << endl;
}
