 #include <stdio.h>

 void main()
 {
    
    double totalExp=0.0,average,exp[15];

    for(int i=0;i<5;++i)
    {
        printf("enter expence:");
        scanf("%lf",&exp[i]);

        totalExp+=exp[i];
    }
    printf("--:Expence Detail:--");
    for(int i=0;i<5;++i)
    {
        printf("\nexpenxe(%d):%.2lf",i+1,exp[i]);

    }

    average=totalExp/5;

    printf("\n Total Expence:%.2lf",totalExp);
    printf("\n average:%.2lf",average);

 }