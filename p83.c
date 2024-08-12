 #include <stdio.h>

void main()
{
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp = num; temp != 0; temp /= 10)
    {
        remainder = temp % 10;  
        reverse = reverse * 10 + remainder;
    }

    printf("\n Reversed number: %d", reverse);

 
}