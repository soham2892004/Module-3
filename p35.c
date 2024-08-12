 #include <stdio.h>

 void main()
 {
    int m,n;

    printf("enter value of M:");
    scanf("%d",&m);

    if(m>0)
    {   n=1;
        printf("value of n is:%d",n);
    }
    else if(m==0)
    {
        n=0;
        printf("value of n is:%d",n);
    }
    else
    {
        n=-1;
        printf("value of n is:%d",n);
    }
 }