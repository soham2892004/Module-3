 #include <stdio.h>
#include <string.h> 

int main() {
    char studentNames[5][50]; 

    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }

    
    printf("\nEntered student names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }

    return 0;
}
