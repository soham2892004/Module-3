 #include <stdio.h>

void main()
{
    int N;
   
    printf("Enter a number : ");
    scanf("%d", &N);
   
    printf("\n ----------------------------");

    for (int i = 1; i <= 10; i++) {
        printf("\n  %d * %d = %d", N, i, N * i);
    }

}