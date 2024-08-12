 #include <stdio.h>

void main()
{
    int no1,no2,choise;
    printf("enter no.1 and no.2:");
    scanf("%d %d",&no1,&no2);

    printf("enter choise(only input 1 to 4):");
    scanf("%d",&choise);

    switch(choise)
    {
        case 1:
            printf("Addition of no.1 and no.2:-%d",no1+no2);
            break;

        case 2:
            printf("subtraction of no.1 and no.2:-%d",no1-no2);
            break;

        case 3:
            printf("multiplication of no.1 and no.2:-%d",no1*no2);
            break;

        case 4:
            printf("division of no.1 and no.2:-%d",no1/no2);
            break;
     }
}