 #include <stdio.h>


void main() {
    char input[1000];  
    char output[1000];
    int i = 0, j = 0;

    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    
    while (input[i] != '\0') {
        if (isalpha((unsigned char)input[i])) {
            output[j++] = input[i];  
        }
        i++;
    }

    output[j] = '\0';  

    
    printf("String with only alphabets: %s\n", output);

    
}
