 #include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    int sum = 0;

    
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    printf("Sum of squares from 1 to %d: %d\n", n, sum);

    
}
