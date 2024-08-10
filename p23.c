 #include <stdio.h>

 void main()
 {
    int no1,no2;

    printf("enter value of no1 & no2:");
    scanf("%d %d",&no1,&no2);

    no1=no1*no2;
    no2=no1/no2;
    no1=no1/no2;

    printf("value of no.1:%d",no1);
    printf("\n value of no.2:%d",no2);

 }