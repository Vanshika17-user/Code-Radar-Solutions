#include<stdio.h>
int main(){
    int a,b;
    char s;
    scanf("%d%d",&a,&b);
    scanf("%c",&s);
    if(s=='+')
    printf("%d",a+b);
    else if(s=='-')
    printf("%d",a-b);
    else if(s=='*')
    printf("%d",a*b);
    else if(s=='/')
     printf("%d",a/b);
    else printf("error");
    return 0;
}