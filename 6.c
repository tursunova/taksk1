#include <stdio.h>

int main(){
    int i,j,l,ans=0,k=0,s[100001];
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            for(l=0;l<=9;l++){
                s[k]=i+j+l;
                k++;
            }
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if (s[i]==s[j]) ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
