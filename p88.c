#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int currentTerm = 1; 

    for (int i = 1; i <= n; ++i) {
        printf("%d ", currentTerm);
        currentTerm *= 2; 
    }

    printf("\n");

    return 0;
}
