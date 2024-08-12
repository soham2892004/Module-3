 #include <stdio.h>

#define MAX 10 


void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols);
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void subtractMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void multiplyMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int rows2, int cols2);

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int rows1, cols1, rows2, cols2;

    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter elements of first matrix:\n");
    inputMatrix(matrix1, rows1, cols1);

    
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter elements of second matrix:\n");
    inputMatrix(matrix2, rows2, cols2);

    
    if (rows1 == rows2 && cols1 == cols2) {
        
        addMatrices(matrix1, matrix2, result, rows1, cols1);
        printf("Sum of matrices:\n");
        displayMatrix(result, rows1, cols1);

        
        subtractMatrices(matrix1, matrix2, result, rows1, cols1);
        printf("Difference of matrices:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("Matrices must be of the same dimensions for addition and subtraction.\n");
    }

    
    if (cols1 == rows2) {
        
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
        printf("Product of matrices:\n");
        displayMatrix(result, rows1, cols2);
    } else {
        printf("Number of columns of the first matrix must be equal to the number of rows of the second matrix for multiplication.\n");
    }

    return 0;
}


void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void subtractMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int rows2, int cols2) {

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }
    
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
