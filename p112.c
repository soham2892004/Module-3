 #include <stdio.h>


void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}

void main() {
    char source[] = "Hello, soham";
    char destination[100]; 

    copyString(destination, source);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    
}
