 #include <stdio.h>


int main() {
    int number, maxDigit = -1; 

    
    printf("Enter an integer: ");
    scanf("%d", &number);


    number = abs(number);

    
    while (number > 0) 
    {
        int digit = number % 10;
        if (digit > maxDigit) 
        {
            maxDigit = digit;
        }
        number /= 10;
    }

    if (maxDigit != -1) 
    {
        printf("Maximum digit: %d\n", maxDigit);
    }
    else 
    {
        printf("No digits found.\n");
    }

}
