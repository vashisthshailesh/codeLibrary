#include <cstdio>
int n,a[100005];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n/3;i++){
        if(n%i==0){
            for(int j=1;j<=i;j++){
                int flag=1;
                for(int k=j;k<=n;k+=i)if(!a[k])flag=0; 
                if(flag){puts("YES");return 0;} 
            }
        }
    }puts("NO");
	return 0;
}
