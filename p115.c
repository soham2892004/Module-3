 #include <stdio.h>
#include <string.h>

void extractSubstring(const char *source, int start, int length, char *result) {
    int sourceLen = strlen(source);

    
    if (start < 0 || start >= sourceLen || length < 0) {
        printf("Invalid start position or length.\n");
        result[0] = '\0';  
        return;
    }

    
    int end = start + length;
    if (end > sourceLen) {
        end = sourceLen;  
    }

    
    strncpy(result, source + start, end - start);
    result[end - start] = '\0';  
}

void main() {
    char str[100];
    char substring[100];
    int start, length;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    printf("Enter the start position: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    
    extractSubstring(str, start, length, substring);

    
    printf("The extracted substring is: \"%s\"\n", substring);

    
}
