 #include <stdio.h>

 void main()
 {
    char firstLetter[30],secondLetter[30],lastLetter[30];

    printf("enter your school name:");
    scanf("%s %s %s",&firstLetter,&secondLetter,&lastLetter);

    printf("School Name Abbreviated Form is %c %c %c",firstLetter[0],secondLetter[0],lastLetter[0]);

   
     }