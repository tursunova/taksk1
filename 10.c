#include <stdio.h>

int main(){
    int i,a,n,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if (a==0) ans++;
    }
    printf("%d",ans);
    return 0;
}
