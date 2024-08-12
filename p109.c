 #include <stdio.h>
#include <stdbool.h> 


bool isWhitespace(char ch) {
    return ch == ' ' || ch == '\t' || ch == '\n';
}


int countWords(const char *str) {
    int wordCount = 0;
    bool inWord = false; 

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isWhitespace(str[i])) {
            
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            
            inWord = true;
        }
    }

    
    if (inWord) {
        wordCount++;
    }

    return wordCount;
}

void main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%[^\n]", inputString); 

    int numWords = countWords(inputString);
    printf("Total number of words: %d\n", numWords);

}
