 #include <stdio.h>

#define MAX_SIZE 1000  

void combineStrings(const char *str1, const char *str2, char *result) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[j++] = str1[i++];
    }

    
    i = 0;
    while (str2[i] != '\0') {
        result[j++] = str2[i++];
    }

    
    result[j] = '\0';
}

void main() {
    char str1[MAX_SIZE], str2[MAX_SIZE], result[MAX_SIZE * 2];

    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    
    combineStrings(str1, str2, result);

    
    printf("Combined string: %s\n", result);


}
