//
//  a1114.cpp
//  
//
//  Created by home on 10/02/19.
//

#include<iostream>
using namespace std;

int main(){
    int x,y,z,a,b,c; cin>>x>>y>>z>>a>>b>>c;
    if(x>a || y>a-x+b || x+y+z>a+b+c)
        cout<<"NO";
    else
        cout<<"YES";
}
