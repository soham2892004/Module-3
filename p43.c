 #include <stdio.h>

 void main()
 {
    int no;

    printf("enter number:");
    scanf("%d",&no);

    if(no<0)
    {
        printf("%d is Negative Number...",no);
    }
    else if(no>0)
    {
        printf("%d is Positive Number...",no);
    }
    else
    {
        printf("%d is zero",no);
    }
 }