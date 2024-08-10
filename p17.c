#include <stdio.h>

int main()
{
    float sal,premium;

    printf("enter salary:");
    scanf("%f",&sal);

    if(sal<=15000)
    {
        premium=sal*0.05;
    }
    else if(sal<=25000)
    {
        premium=sal*0.08;
    }
    else
    {
        premium=sal*0.10;
    }

    printf("person's insurence premium:%.2f",premium);

    return 0;
}


