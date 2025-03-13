#include<stdio.h>
int main(){
    int a,b;
    char s;
    scanf("%d%d",&a,&b);
    scanf("%s",&s);
    if(s=='+')
    printf("%d\n",(int)a+b);
    else if(s=='-')
    printf("%d\n",(int)a-b);
    else if(s=='*')
    printf("%d\n",(int)a*b);
   else if (s == '/') {
        if (b != 0)
            printf(" %d\n",(int) a / b);
        else
            printf("error\n");
    } else
        printf("error\n");}