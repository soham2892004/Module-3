 #include <stdio.h>

void main()
{
    char n = 'A';

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", n++);
        }
        printf("\n");
    }
}
