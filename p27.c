 
#include <stdio.h>

void main() {
     float AVERAGE_DAYS = 30.44;
    float days,remain_d;          
    int months;    

    printf("Enter the number of days: ");
    scanf("%f", &days);

    months = (int)(days / AVERAGE_DAYS);
    remain_d = days - (months * AVERAGE_DAYS);

 
    printf("\n Months: %d", months);
    printf("\n Remaining days: %.2f", remain_d);

}
