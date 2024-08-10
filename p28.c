 
#include <stdio.h>

void main() {
    int DAYS_IN_YEAR = 365,MONTHS_IN_YEAR = 12,days,months;
    float years,remain_d;

    printf("Enter the number of years: ");
    scanf("%f", &years);

 
    days = (int)(years * DAYS_IN_YEAR);

    months = (int)(days / 30.44);  
    remain_d = days - (months * 30.44);

    printf("\n Equivalent days: %d", days);
    printf("\n Equivalent months: %d", months);
    printf("\n Remaining days: %.2f", remain_d);

}
