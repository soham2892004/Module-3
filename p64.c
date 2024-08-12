 #include <stdio.h>

 void main()
 {
    int no;
    int countEven,countOdd,sumEven,sumOdd;

    for(int i=0;i<10;i++)
    {
        printf("enter number:");
        scanf("%d",&no);

        if(no%2==0)
        {
            countEven++;
            sumEven+=no;
        }
        else
        {
            countOdd++;
            sumOdd+=no;
        }
    }

    printf("\nDetails of Information:--\n");
    printf("Count of Even Numbers:%d\n",countEven);
    printf("Count of Odd Numbers:%d\n",countOdd);
    printf("Sum of even Numbers:%d\n",sumEven);
    printf("Sum of odd Numbers:%d\n",sumOdd);


    
 }