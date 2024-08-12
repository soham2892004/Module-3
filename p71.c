 #include <stdio.h>


void main() {
    int number, firstDigit, lastDigit, sum;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    firstDigit = number;
    while (firstDigit >= 10) 
    {
        firstDigit /= 10;
    }

    
    lastDigit = number % 10;

    
    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

}
