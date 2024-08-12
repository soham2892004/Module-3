 #include <stdio.h>


void main() {
    char names[5][50];

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nYou entered the following names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Name of user-%d: %s\n", i + 1, names[i]);
    }

}
