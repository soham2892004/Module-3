 
#include <stdio.h>

void main() {
    int minutes,seconds;    
    float hours;    

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    hours = minutes / 60.0;

    printf("\n Equivalent seconds: %d", seconds);
    printf("\n Equivalent hours: %.2f", hours);

}
