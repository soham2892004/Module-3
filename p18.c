 #include <stdio.h>

 void main()
 {

    float sal,annualSal,hra,da;
    int hraPr,daPr;

    printf("enter salary:");
    scanf("%f",&sal);

    printf("enter hra percentage:");
    scanf("%d",&hraPr);

    printf("enter daPr percentage:");
    scanf("%d",&daPr);

    hra=sal*(hraPr/100);

    da=sal*(daPr/100);

    annualSal=(sal+hra+da)*12;

    printf("Person's annual salary:%.2f",annualSal);

   
 }