 #include <stdio.h>

void  main() {
    int numbers[5]; 
    int sum = 0; 

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
    }

    printf("Sum of the entered numbers: %d\n", sum);


}
