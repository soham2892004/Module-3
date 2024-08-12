 #include <stdio.h>

void main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    int sum = 0;

    
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of the first %d positive integers: %d\n", n, sum);


}
