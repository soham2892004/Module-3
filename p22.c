 #include <stdio.h>

 void main()
 {
    double principal_Amount,rate_Interest,time,amount,compound_interest;

    printf("\nenter principal amount:");
    scanf("%lf",&principal_Amount);

    printf("\nenter rate of annual interest:");
    scanf("%lf",&rate_Interest);

    printf("\nenter duration:");
    scanf("%lf",&time);

    amount=principal_Amount*(1+rate_Interest/100)*time;

    compound_interest=amount-principal_Amount;

    printf("\nFinal value of amount:%.2lf",amount);

    printf("\nfinal value of compound interest:%.2lf",compound_interest);
 }