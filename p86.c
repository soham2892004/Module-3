 #include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    int sum = 0; 

    for (int i = 1; i <= n; ++i) {
        int innerSum = 0; 
        for (int j = 1; j <= i; ++j) {
            innerSum += j; 
        }
        sum += innerSum; 
    }

    printf("Sum of the series: %d\n", sum);

    
}
