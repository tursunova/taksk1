# taksk1
3)
#include <stdio.h>

int a,b;
int main(){
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}
