 #include <stdio.h>

 void main()
 {
    int no;

    printf("enter number:");
    scanf("%d",&no);

    if(no<0)
    {
        printf("%d is negative number... ",no);
    }
    else if(no>0)
    {
        printf("%d is positive number...",no);
    }
    else
    {
        printf("input value is zero");
    }
 }