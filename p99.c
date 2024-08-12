 #include <stdio.h>


int isPalindrome(int num);

void main() {
    int number;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    
}


int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    
    for (; num > 0; num /= 10) {
        reversed = reversed * 10 + num % 10;
    }
    
    
    return (original == reversed);
}
