 #include <stdio.h>


void main() {
    int number, sum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    while (number > 0) 
    {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    
}
