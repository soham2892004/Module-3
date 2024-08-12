 #include <stdio.h>


int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void main() {
    char inputString[100]; 
    printf("Enter a string: ");
    scanf("%s", inputString);

    int len = stringLength(inputString);
    printf("Length of the string: %d\n", len);

}
