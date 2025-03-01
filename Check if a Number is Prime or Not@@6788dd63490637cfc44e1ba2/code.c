#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>1 && n%1==0 && n%2!=0)
    printf("Prime");
    else if(n%2==0)
    printf("Prime");
    else printf("Not Prime");
}