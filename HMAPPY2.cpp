#include<iostream>
using namespace std ; 

int main()
{
	int t ; cin>> t;
	for (int i = 0; i < t; i++){
		long long  l, p , n, k, a, b, u ,d;	cin >> n>> a>> b>> k;
		long long maxi = (a > b) ? a : b;
		u = a; d = b;
		int c;
    do {
        c = a % b;
        if (c > 0) {
            a = b;
            b = c;
        }
    } while (c != 0);
		l = (u*d)/b;

		p= n/u  + n/d  -2*(n/l);
		if(p >= k)	
			cout << "Win" << endl;
		else 
			cout << "Lose" << endl;
	}
}
