#include <stdio.h>
#include <math.h>


int main(){
    int n,i,j,m,x,a[101];
    scanf("%d%d",&m,&n);
    for(i=1;i<=n+m;i++){
        scanf("%d",&a[i]);
    }
    if (m<n) {
        for(i=1;i<=m;i++){
            x=a[1];
            for(j=1;j<=n+m-1;j++){
                a[j]=a[j+1];
            }
            a[n+m]=x;
        }
    } else {
        for(i=1;i<=n;i++){
            x=a[n+m];
            for(j=n+m;j>=2;j--){
                a[j]=a[j-1];
            }
            a[1]=x;
        }
    }
    for(i=1;i<=n+m;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

