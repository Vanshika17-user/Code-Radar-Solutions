#include <stdio.h>

int main() {
    int n;

    // Ask user for input
   
    scanf("%d", &n);

    // Loop through rows
    for (int i = 0; i < n; i++) {
        // Loop through columns
        for (int j = 0; j < n; j++) {
            // Print '*' on borders, space otherwise
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        // Move to next line after each row
        printf("\n");
    }

    return 0;
}


