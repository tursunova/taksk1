#include <stdio.h>

int main(){
    int a,b,k=0;
    scanf("%d%d",&a,&b);
    while(a>=b){
        a-=b;
        k++;
    }
    printf("%d",k);
    return 0;
}
