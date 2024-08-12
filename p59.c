 #include <stdio.h>

void main() {
    double unitCharges, totalBill;
    const double surchargeRate = 0.20; 


    printf("Enter the total electricity unit charges: ");
    scanf("%lf", &unitCharges);

    
    if (unitCharges <= 50) 
    {
        totalBill = unitCharges * 0.50;
    } 
    else if (unitCharges <= 150) 
    {
        totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
    }
    else if(unitCharges <= 250) 
    {
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    }
    else 
    {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }

    
    totalBill += totalBill * surchargeRate;

    printf("Total electricity bill: Rs. %.2lf\n", totalBill);

}
