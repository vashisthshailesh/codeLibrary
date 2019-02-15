#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

const int N=1e9+7;
int main(){
	int t; cin>>t;
	for ( int i = 0; i < t; i++){
		int lis[26];
		string s; cin>>s;
		int p = s.size();
		for(int j = 0; j < 26 ; j++)
			lis[j]=0;

		for ( int j = 0 ; j <  p ; j++){
			lis[(int)s[j]-65]+=1;
		}
		sort(lis,lis+26);
		int poi;
		for( int  j= 0; j<26 ; j++){
			if(lis[j] != 0){
				poi = j;
				break;
			}
		}
		int  b = N;
		for ( int j = 1; j <= p ; j++){
		//	cout<<"p " <<p<<" "<<"j "<<j<<endl;
			if ( p%j == 0){
				int a =0;
	//			cout<<"poi "<<poi<<endl;
				for ( int k = 25; k >= poi; k--){
					if ( lis[k] >= p/j ){
						a+=lis[k] - (p/j) ;
			//		cout<<"fdfds"<<endl	;
					}
					else
						break;
				}
				if(j < 26-poi){
					int io = j;
					int iom = poi;
					while(io != 26 - poi){
						a+=lis[iom];
						//cout<<"trt"<<endl;
						io+=1;
						iom+=1;
					}
				}
		//		cout<<"a "<<a<<endl;
				b=min(a,b);
			}
		}
		cout<<b<<endl;
	}
}
