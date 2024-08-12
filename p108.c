 #include <stdio.h>
#include <string.h> 

void main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);

    printf("Individual characters (in reverse order):\n");
    for (int i = length - 1; i >= 0; --i) {
        printf("%c\n", inputString[i]);
    }


}
