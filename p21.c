 #include <stdio.h>

 void main()
 {
    int no1,no2,abcd;

    printf("enter two number:");
    scanf("%d %d",&no1,&no2);

    abcd=no1;
    no1=no2;
    no2=abcd;

    printf("after swapping number(using 3rd variable):no1=%d,no2=%d\n",no1,no2);


    no1=no1+no2;
    no2=no1-no2;
    no1=no1-no2;

    printf("after swapping number(without using 3rd variable):no1=%d,no2=%d\n",no1,no2);

    return 0;
 }