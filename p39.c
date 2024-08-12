 #include <stdio.h>

 void main()
 {
    char ch;

    printf("enter a character:-");
    scanf("%c",&ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is an Uppercase Charecter vowel...",ch);
    }
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is a Lowercase Charecter vowel...",ch);
    }
    else{
        printf("%c is not a vowel character",ch);
    }
 }