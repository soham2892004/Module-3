 #include <stdio.h>


int compareStrings(const char* str1, const char* str2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            
            return str1[i] - str2[i];
        }
        i++;
    }

    
    return str1[i] - str2[i];
}

void main() {
    char str1[] = "Hello, world!";
    char str2[] = "Hello, World!"; 

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 comes before String 2.\n");
    } else {
        printf("String 2 comes before String 1.\n");
    }

    
}
