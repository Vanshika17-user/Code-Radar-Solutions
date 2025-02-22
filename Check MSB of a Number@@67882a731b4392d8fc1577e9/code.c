#include<stdio.h>
#include<stdint.h>
int main(){
    int32_t a;
    scanf("%d",&a);
    if(a&1 && a&!=0)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}