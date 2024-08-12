 #include <stdio.h>


union Variant {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    union Variant myVariant;

    
    myVariant.intValue = 42;

    
    printf("Integer value: %d\n", myVariant.intValue);
    printf("Float value: %f\n", myVariant.floatValue); 
    printf("Char value: %c\n", myVariant.charValue);   

    return 0;
}
