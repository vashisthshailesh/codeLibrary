//
//  1130B.cpp
//  
//
//  Created by home on 24/02/19.
//

#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

const int MAX =2e5+7;
pair<int , int > a[MAX];

int main(){
    int n ; cin >>n;
    for(int i  =0; i<2*n ;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a,a+2*n);
    long long sum = a[0].second +a[1].second; int v=0,b=0;
    //for(int i= 0; i<2*n; i++){
       // cout<<a[i].first<<" "<<a[i].second<<endl;
    
    for(int i = 0;i<2*n-3;i=i+2){
        sum+=abs(a[i+2].second-a[i].second)+abs(a[i+3].second-a[i+1].second);
    }
    cout<<sum;
}
