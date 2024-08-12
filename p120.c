#include <stdio.h>


#define MAX_LENGTH 1000  
#define MAX_WORD_LENGTH 100  

void findLargestAndSmallestWords(const char *str, char *largest, char *smallest) {
    char word[MAX_WORD_LENGTH];
    int maxLength = 0, minLength = MAX_LENGTH;
    int currentLength = 0;
    int wordCount = 0;

    
    largest[0] = '\0';
    smallest[0] = '\0';

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            
            if (currentLength > 0) {
                word[currentLength] = '\0';  

                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    strcpy(largest, word);  
                }

                if (currentLength < minLength) {
                    minLength = currentLength;
                    strcpy(smallest, word);  
                }

                currentLength = 0;  
                wordCount++;
            }
            if (str[i] == '\0') break;
        } else {
        
            word[currentLength++] = str[i];
        }
    }
}

void main() {
    char str[MAX_LENGTH];
    char largest[MAX_WORD_LENGTH];
    char smallest[MAX_WORD_LENGTH];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    findLargestAndSmallestWords(str, largest, smallest);

    
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);


}
