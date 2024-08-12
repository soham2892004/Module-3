#include <stdio.h>

void main()
{
    int rows = 5, cols = 10, num = 1;  

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%02d ", num++);
        }
        printf("\n");
    }

}