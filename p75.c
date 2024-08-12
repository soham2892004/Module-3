#include <stdio.h>


long long calculateFactorial(int num) {
    long long factorial = 1;
    for (int i = 1; i <= num; ++i) 
    {
        factorial *= i;
    }
    return factorial;
}

void main() {
    int numbers[5];

    printf("Enter five non-negative integers:\n");
    for (int i = 0; i < 5; ++i) 
    {
        scanf("%d", &numbers[i]);
    }

    printf("Factorials of the entered numbers:\n");
    for (int i = 0; i < 5; ++i) 
    {
        if (numbers[i] < 0) 
        {
            printf("Factorial is not defined for negative numbers.\n");
        } 
        else 
        {
            long long result = calculateFactorial(numbers[i]);
            printf("%d! = %lld\n", numbers[i], result);
        }
    }

}
