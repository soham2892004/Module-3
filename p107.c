 #include <stdio.h>

void main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Individual characters:\n");
    for (int i = 0; inputString[i] != '\0'; ++i) {
        printf("%c\n", inputString[i]);
    }

    
}
