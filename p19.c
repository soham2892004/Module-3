 #include <stdio.h>

int main() {
    double principal, rate, amount;
    int years, times_compounded;


    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter time in years: ");
    scanf("%d", &years);
    
    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &times_compounded);

    rate = rate / 100;

    
    amount = principal;

    for (int i = 0; i < years * times_compounded; i++) {
        amount += amount * (rate / times_compounded);
    }

    
    printf("Amount after %d years: %.2lf", years, amount);


}
