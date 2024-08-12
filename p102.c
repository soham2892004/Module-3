 #include <stdio.h>

void  main() {

    int matrix[3][4];


    matrix[0][0] = 1;
    matrix[0][1] = 2;
    
    int anotherMatrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    
    printf("Element at matrix[1][2]: %d\n", matrix[1][2]);
    printf("Element at anotherMatrix[0][1]: %d\n", anotherMatrix[0][1]);

    
}
