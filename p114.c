 #include <stdio.h>


void main() {
    char str[100];  

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    len = strlen(str);

    
    printf("The maximum number of characters in the string is: %zu\n", len);


}