 #include <stdio.h>

 void main()
 {
    int i;
    char empName[5][45];
    double empSal[15],totalSalary=0.0,average;

    for(i=0;i<5;++i)
    {
        printf("\nenter employee name:");
        scanf("%s",empName[i]);
        printf("\nenter his salary:");
        scanf("%lf",&empSal[i]); 

        totalSalary+=empSal[i];
    }

    average=totalSalary/5;
        printf("\n--:Employee Details:--");
    for(i=0;i<5;++i)
    {
        printf("\nemployee name:%s",empName[i]);
        printf("\nemployee salary:%.2lf",empSal[i]);
    }

    printf("\n Total Salary:%.2lf",totalSalary);

    printf("\n Average Salary:%.2lf",average);
    
 }