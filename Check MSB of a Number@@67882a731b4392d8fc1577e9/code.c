#include<stdio.h>
#include<stdint.h>
int main(){
    int32_t a;
    scanf("%d",&a);
    int msb=(a&(1<<31))!=0;
    if(msb)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}