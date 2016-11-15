#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int i,k=0,er=0;
    char s[101];
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++){
        if (s[i]=='(') k++; else {
            if (k==0) er=1; else k--;
        }
    }
    if (k!=0) er=1;
    if (er==0) printf("YES"); else printf("NO");
    return 0;
}
