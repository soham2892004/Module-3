#include <stdio.h>

void main() {
    int no1, no2, no3;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);

    
    int max = (no1 > no2) ? ((no1 > no3) ? no1 : no3) : ((no2 > no3) ? no2 : no3);

    
    printf("The maximum number is: %d\n", max);

    
}
