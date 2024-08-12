 #include <stdio.h>

void main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 6 - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)


        {
            printf("* ");
        }
        printf("\n");
    }
}
