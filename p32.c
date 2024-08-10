 
#include <stdio.h>

void main()
{
   
    double num1, num2, sum;

    printf("\n Enter the first number: ");
    scanf("%lf", &num1);

    printf("\n Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    printf("==============================");

    printf("\n Sum: %.2f", sum);

    printf("\n Size of the sum: %zu bytes", sizeof(sum));

   
}
