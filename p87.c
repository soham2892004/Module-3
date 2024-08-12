 #include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    double sum = 0.0; 

    for (int i = 1; i <= n; ++i) {
        double term = (double)i / (i + 1); 
        if (i % 2 == 0) {
            sum -= term; 
        } else {
            sum += term; 
        }
    }

    printf("Sum of the series: %.6lf\n", sum); 

    
}
