 #include <stdio.h>

void main() {
    int n;
    double sum = 0.0; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        int i = 1;

     
    while (i <= n) 
    {
            sum += i;
            i++;
    }

        printf("Sum of the first %d natural numbers = %.2lf\n", n, sum);
    }


}
