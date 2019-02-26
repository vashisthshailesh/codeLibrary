//
//  AVG.cpp
//  
//
//  Created by home on 23/02/19.
//

#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    
    for (int i=0; i<t; i++) {
     int n , k ,v;    cin>>n>>k>>v;
    
    int x = 0;
    for(int i = 0; i<n;i++){
        int p ;cin>>p;
        x+=p;
    }
    int y = ((-(x)+v*(n+k))/k)>0&&(-(x)+v*(n+k))%k==0 ?(-(x)+v*(n+k))/k:-1;
        cout<<y<<endl;}
}
