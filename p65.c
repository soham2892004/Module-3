 #include <stdio.h>
 void main()
 {
    int no;

    printf("enter number:");
    scanf("%d",&no);

    for(int i=1;i<=10;i++)
    {
        printf("\t%dX%d=%d\n",no,i,no*i);
    }
 }