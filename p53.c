 #include <stdio.h>

void main() {
    int cId, unitsConsumed;
    char cName[50];
    float amount, surcharge, tAmount;

    printf("Enter customer ID: ");
    scanf("%d", &cId);
    printf("Enter customer name: ");
    scanf("%s", cName);
    printf("Enter units consumed: ");
    scanf("%d", &unitsConsumed);

    
    if (unitsConsumed <= 350) 
    {
        amount = unitsConsumed * 1.20;
    }
    else if (unitsConsumed <= 600) 
    {
        amount = (350 * 1.20) + ((unitsConsumed - 350) * 1.50);
    }
    else if (unitsConsumed <= 800) 
    {
        amount = (350 * 1.20) + (250 * 1.50) + ((unitsConsumed - 600) * 1.80);
    }
    else 
    {
        amount = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((unitsConsumed - 800) * 2.00);
    }

    if (amount > 800) 
    {
        surcharge = amount * 0.18;
    }
    else 
    {
        surcharge = 0;
    }

    
    tAmount = amount + surcharge;
    if (tAmount < 256) {
        tAmount = 256;
    }

    
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", cId);
    printf("Customer Name: %s\n", cName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Amount: %.2f\n", amount);
    printf("Surcharge (18%%): %.2f\n", surcharge);
    printf("Total Amount: %.2f\n", tAmount);


}