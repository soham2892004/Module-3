 #include <stdio.h>

 void main()
 {
    int month;

    printf("enter month number(between 1-12):");
    scanf("%d",&month);

    if(month<1 || month>12)
    {
        printf("invalid for month number...");
    }
    else
    {
        switch(month)
        {
            case 1:
            case 2:
                printf("28/29 days in this month...");
                break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                printf("30 days in this month...");
                break;
            case 12:
                printf("31 days int this month...");
                break;

        }
    }
 }