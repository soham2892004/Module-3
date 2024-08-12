 #include <stdio.h>



void reverseString(char str[]);
int isPalindrome(char str[]);

int main() {
    char str[100];
    
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';
    
    
    reverseString(str);
    printf("Reversed string: %s\n", str);

    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}


void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;
    
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


int isPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    
    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; 
        }
        start++;
        end--;
    }
    
    return 1; 
}
