#include <stdio.h>

int main()
{

    int no1,no2,Add,Sub,Mul,Div,Mod;

    printf("Simple Calculator Is Here.....\n");
    printf("enter here Number 1 & 2:\n");
    scanf("%d   %d",&no1,&no2);

    Add=no1+no2;
    Sub=no1-no2;
    Mul=no1*no2;
    Div=no1/no2;
    Mod=no1%no2;

    printf("\nresult of Addition:%d",Add);
    printf("\nresult of Substraction:%d",Sub);
    printf("\nresult of Multiplication:%d",Mul);
    printf("\nresult of Division:%d",Div);
    printf("\nresult of Modulo:%d",Mod);
}
