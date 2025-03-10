#include <stdio.h>
int main() {
    int n, i = 2, isPrime = 1;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    while (i * i <= n) {
        if (n % i == 0) {
            isPrime = 0; 
            break;
        }
        i++;
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
