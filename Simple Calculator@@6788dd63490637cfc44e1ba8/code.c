#include<stdio.h>
int main(){
    int a,b;
    char s;
    scanf("%d%d%c",&a,&b,&s);
    if(s=='+')
    printf("%d\n",a+b);
    else if(s=='-')
    printf("%d\n",a-b);
    else if(s=='*')
    printf("%d\n",a*b);
   else if (s == '/') {
        if (b != 0)
            printf(" %d\n", a / b);
        else
            printf("error\n");
    } else
        printf("error\n");}