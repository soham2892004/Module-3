 
#include <stdio.h>

void main() {
   
    int n,n1, n2, n3;  

    printf("Enter an number: ");
    scanf("%d", &n);

   
    n1 = n;      
    n2 = n * n;
    n3 = n * n * n;

   
    printf("\n N^1 : %d", n1);
    printf("\n N^2 : %d", n2);
    printf("\n N^3 : %d", n3);

   
}
