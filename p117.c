#include <stdio.h>


#define WORD "is"


int countOccurrences(const char *str, const char *word) {
    int count = 0;
    const char *temp = str;
    size_t wordLength = strlen(word);

    while ((temp = strstr(temp, word)) != NULL) {
        
        if ((temp == str || !isalpha(*(temp - 1))) && 
            !isalpha(*(temp + wordLength))) {
            count++;
        }
        temp += wordLength; 
    }

    return count;
}

int main() {
    char str[1000]; 

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    int count = countOccurrences(str, WORD);

    
    printf("The word '%s' appears %d times in the given string.\n", WORD, count);

    
}
