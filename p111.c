 #include <stdio.h>


void  main() {
    char inputString[100]; 
    int alphabets = 0, digits = 0, specialChars = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", inputString); 

    while (inputString[i] != '\0') {
        if (isalpha(inputString[i])) {
            alphabets++;
        } else if (isdigit(inputString[i])) {
            digits++;
        } else {
            specialChars++;
        }
        i++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    
}
