 #include <stdio.h>

void main()
{
    int count = 0 , e_count=0 , o_count=0 , num;

    while (count < 5) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            e_count++;
        } else {
            o_count++;
        }
        count++;  
    }

    printf("\n total even numbers: %d", e_count);
    printf("\n total odd numbers: %d", o_count);

}