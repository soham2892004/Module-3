#include <stdio.h>

int main() {
    int numTerms, firstTerm = 0, secondTerm = 1, nextTerm;


    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &numTerms);


    printf("Fibonacci series up to %d terms:\n", numTerms);
    printf("%d, %d", firstTerm, secondTerm);


    for (int i = 2; i < numTerms; ++i) {
        nextTerm = firstTerm + secondTerm;
        printf(", %d", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

}
