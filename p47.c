#include <stdio.h>

void main() {
    int no1, no2, no3,Large;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);

    
    Large = (no1 > no2) ? ((no1 > no3) ? no1 : no3) : ((no2 > no3) ? no2 : no3);

    
    printf("The maximum number is: %d\n",Large);

    
}
 