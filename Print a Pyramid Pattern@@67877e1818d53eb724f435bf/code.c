#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        for(j=i;j<=i;j++){
    printf("*");}
    printf("\n");}
    return 0;
}