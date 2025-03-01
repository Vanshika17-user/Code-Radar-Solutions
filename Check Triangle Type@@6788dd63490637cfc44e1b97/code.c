#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&A,&b,&c);
    if(a==b==c)
    print("Equilateral");
    else if(a==b || a==c || b==c)
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}