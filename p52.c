 #include <stdio.h>

 void main()
 {
    int customerId,consumedUnit;
    char customerName[45];
    float amount,surcharge,totalAmount;

    printf("Enter Customer Id:-");
    scanf("%d",&customerId);

    printf("Enter Customer Name:-");
    scanf("%s",customerName);

    printf("Enter Consumed Unit:-");
    scanf("%d",&consumedUnit);

     if (consumedUnit <= 350) {
        amount = consumedUnit * 1.20;
    } else if (consumedUnit <= 600) {
        amount = (350 * 1.20) + ((consumedUnit - 350) * 1.50);
    } else if (consumedUnit <= 800) {
        amount = (350 * 1.20) + (250 * 1.50) + ((consumedUnit - 600) * 1.80);
    } else {
        amount = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((consumedUnit - 800) * 2.00);
    }

    
    surcharge = amount * 0.15;


    totalAmount = amount + surcharge;

     printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", consumedUnit);
    printf("Amount: %.2f\n", amount);
    printf("Surcharge (15%%): %.2f\n", surcharge);
    printf("Total Amount: %.2f\n", totalAmount);


 }