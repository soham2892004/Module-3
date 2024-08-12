 #include <stdio.h>



int isVowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char inputString[100]; 
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", inputString); 

    while (inputString[i] != '\0') {
        char currentChar = tolower(inputString[i]); 

        if (isalpha(currentChar)) {
            if (isVowel(currentChar)) {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    
}
