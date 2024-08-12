 #include <stdio.h>

 void main()
 {
    int marks;

    printf("enter marks(Under 40-Marks):");
    scanf("%d",&marks);

    if(marks>=28)
    {
        printf("Student has Passed In Exam...");
    }
    else
    {
        printf("Student has Failed In Exam...");
    }
 }