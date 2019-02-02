#include<iostream>
using namespace std;

int main(){
	string s;
	int l,r,m;
	cin>>s;
	while(s.size() != 7 && s.size() != 3){
		l = 0 ,r = 1;
		do{
			cout<< "? " << l << " " << r << endl;
			cin>>s;
			if(s == "y")
				l = r,r<<=1;
		}
		while(s == "y");


		while(l + 1< r){
		m = (l + r)/2;
		cout<< "? " << l << " " << m << endl;
		cin>>s;
		if(s=="y")
			l = m;
		else
			r = m;

		}
		cout<< "! " << l+1 <<endl;
		cin>>s;
	} 
return 0;
}
