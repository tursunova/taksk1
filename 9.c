#include <stdio.h>

int i,j,ans,n,u[1000001];

int main(){
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if (u[i]==0) {
            printf("%d\n",i);
            for(j=i*i;j<=n;j+=i){
                u[j]=1;
            }
        }
    }
    return 0;
}
