 #include<stdio.h>

 void main()
 {
    int no;

    printf("enter number:");
    scanf("%d",&no);

    (no%2==0)   ?  printf("%d is even",no) : printf("%d is odd",no);
     
     }