#include<stdio.h>
int main(){
    int a,b;
    char s;
    scanf("%d%d",&a,&b);
    scanf("%c",&s);
    if(s=='+')
    printf(a+b);
    else if(s=='-')
    printf(a-b);
    else if(s=='*')
    printf(a*b);
    else printf(a/b);
    return 0;
}