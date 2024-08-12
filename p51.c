 #include <stdio.h>

 void main()
 {
    int Expence_value,Sell_value;

    printf("Enter Value of Expence:");
    scanf("%d",&Expence_value);

    printf("Enter Value of Sale:");
    scanf("%d",&Sell_value);

    if(Sell_value>Expence_value)
    {
        printf("PROFIT");
    }
    else if(Sell_value==Sell_value)
    {
        printf("NONE PROFIT OR LOSS");
    }
    else
    {
        printf("LOSS");
    }
}