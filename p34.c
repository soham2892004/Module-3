#include <stdio.h>

void  main()
{
    int n1,n2;

    printf("enter no.1 & no.2:");
    scanf("%d %d",&n1,&n2);

    if(n1==n2)
    {
        printf("value of no.1 is equal to no.2");
    }
    else
    {
        printf("value of no.1 is not equal to no.2");
    }
}