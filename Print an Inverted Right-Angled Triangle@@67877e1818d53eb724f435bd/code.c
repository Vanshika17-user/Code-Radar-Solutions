#include<stdio.h>
int main(){
    int n, i, j;

    // Input the number of rows for the triangle
    scanf("%d", &n);

    // Loop to generate the inverted triangle pattern
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Print a new line after completing each row
        printf("\n");
    }

    return 0;
}
