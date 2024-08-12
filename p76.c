 #include <stdio.h>

 void main()
 {
    int no=1,sum=0;

    while(no<=10)
    {
        sum+=no;
        no++;
    }
    printf("Sum of the first 10 natural numbers:%d\n",sum);
 }