 
#include <stdio.h>

void main() {
    float DAYS_IN_YEAR = 365.25,years, days,days_from_years,years_from_days;

    printf("Enter number of years: ");
    scanf("%f", &years);
    days_from_years = years * DAYS_IN_YEAR;
    printf("%.2f years is approximately %.2f days.\n", years, days_from_years);

    printf("Enter number of days: ");
    scanf("%f", &days);
    years_from_days = days / DAYS_IN_YEAR;
    printf("%.2f days is approximately %.2f years.\n", days, years_from_days);

 
}
