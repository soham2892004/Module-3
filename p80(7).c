 #include <stdio.h>

void main()
{
    int size = 10,num = 1;
    int matrix[size][size];
    int top = 0, bottom = size - 1,left = 0, right = size - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = 0;
        }
    }

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left; i--)
        {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--)
        {
            matrix[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

}