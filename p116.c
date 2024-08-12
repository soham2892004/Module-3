 #include <stdio.h>


void  main() {
    char sentence[256];  
    char result[256];   
    int i = 0;

    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    while (sentence[i] != '\0') {
        if (islower(sentence[i])) {
            result[i] = toupper(sentence[i]);  
        } else if (isupper(sentence[i])) {
            result[i] = tolower(sentence[i]);  
        } else {
            result[i] = sentence[i];  
        }
        i++;
    }

    result[i] = '\0'; 

    
    printf("Modified sentence: %s\n", result);


}
