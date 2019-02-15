#include <iostream>
#include <utility>
using namespace std;
const int MOD = 1e9 + 7 ;

int gcd(long a, long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int pw (int a,int b){
    int res = 1;
    while(b){
        if(b&1){
            res = (res * 1ll * a) % MOD;
        }
        b >>= 1;
        a = (a * 1ll * a) % MOD ;
    }
    
    return res;
}

pair<int,int> add(int n1, int n2, int d1, int d2){
    
    long long n = n1*1ll*d2 + n2*1ll*d1 ;
    long long d = d1*1ll*d2 ;
    long long hcf = gcd(n,d);
    //cout<<n/hcf<<" "<<d/hcf<<endl;
    pair <int,int> pair1= make_pair(n/hcf,d/hcf);
    return pair1;
    
}


long long solve(int n, int k, int m)
{
    pair<int,int> pair1;
    int fracnum = 1, fracdeno = n ,times,times2, fntemp , fdtemp ;
    if(m%2!=0){
        times = pw(n,m/2+1);
        fracnum = times-pw(n-1,m/2+1);
        fracdeno =  times;
       // cout<<fracnum<<" "<<fracdeno<<endl;
    }
    else{
        m--;
        times = pw(n,m/2+1);
        times2 = pw(n-1,m/2+1);
        fracnum = times- times2;
        fracdeno =  times;
        fntemp = times2;
        fdtemp = pw(n,m)*(n+k);
        //cout<<fracnum<<" "<<fracdeno<<" "<<fntemp<<" "<<fdtemp<<endl;
        pair1=add(fracnum,fntemp,fracdeno,fdtemp);
        fracnum=pair1.first;
        fracdeno= pair1.second;
        cout<<fracnum<<" "<<fracdeno<< endl;
    }
    return (fracnum *1ll *pw (fracdeno, MOD-2))%MOD;
}


int main(){
    int t; cin>>t;
    for(int i =0 ; i<t ;i++){
        int k,n,m; cin>>n>>k>>m;
        cout<<solve(n,k,m)<<endl;
    }
    
}
