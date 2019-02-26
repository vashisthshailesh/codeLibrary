//
//  1130A.cpp
//  
//
//  Created by home on 24/02/19.
//

#include <iostream>
using namespace std;

int main(){
    int n ; cin>>n;
    int x=0, y=0 ;
    for (int i =0 ; i<n; i++){
        int a; cin>>a;
        if(a>0)
        x++;
        else if(a<0)
        y++;
    }
    int c = (n%2)?n/2+1:n/2;
    if(x>y && x>=c )
    cout<<1<<endl;
    else if(y>0 && y>=c)
    cout<<-1<<endl;
    else
    cout<<0<<endl;
}
