#include<iostream>
#include<map>
using namespace std;

int main(){
	int t; cin>>t;
	for(int i = 0; i < t ; i++){
		int n; cin>>n;
		map <char , int> my_map;
		map<char ,char> my_map2[n];

		for ( int j = 0;  j < n ; j++){
			string s ; cin>>s;
			for ( int k = 0 ; k < s.length() ; k++){
				if(my_map2[j][s[k]] ==0 ){				
					my_map[s[k]]++;
					my_map2[j][s[k]]++			;	
				}
			}
		}
		int p = 0;
			for (map<char ,int>::iterator it=my_map.begin() ; it!=my_map.end(); ++it){
				if(it->second == n){
					p = p + 1;
				}
			}
		cout<<p<<endl;
	}
}
