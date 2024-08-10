 
#include <stdio.h>

void main() {
    float fahrenheit;  
    float celsius;    

    printf("\n Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);
   
    printf("\n Temperature in Celsius: %.2f", celsius);
}
