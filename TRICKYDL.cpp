//
//  TRICKYDL.cpp
//  
//
//  Created by home on 23/02/19.
//

#include <iostream>
#include<math.h>
using namespace std;


long long pw( int b) {
    long long a = 2;
    long long res = 1;
    while (b) {
        if (b&1)
        res = (res *1ll* a) ;
        b >>= 1;
        a = (a *1ll* a) ;
    }
    return res;
}

int main(){
    int t; cin>> t;
    for(int i = 0 ; i<t ;i++){
        double a; cin>>a;
        int p=1;
        long long x = 1;
        int y=0;
        long long ma;
        while(p){
            //cout<<pw(x)-1<<" pw"<<endl;
            //cout<<a*x<<" ax"<<endl;
            long long ty=pw(x)-1-a*x;
            ma=max(ma,ty);
            if(ty>0){
                p=0;
            }
            else{
            x++;
            }
            //cout<<" GGG"<<endl;
        }
        cout<<x-1<<" ";
        int h = (int)(log(a/0.69314718056)/log(2));
       
        h = pw(h+1)-(h+1)*a < pw(h)-(h)*a? h+1:h;
        cout<<h<<endl;
    }
}
