#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    switch(n){
    case 'A':
    printf("Excellent");
    case 'B':
    printf("Good");
    case 'C':
    printf("Average");
    case 'D':
    printf("Below Average");
    case 'F':
    printf("Fail");
    default:
    printf("Invalid Grade");}
    return 0;
}