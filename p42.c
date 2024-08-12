 #include <stdio.h>
 
 void main()
 
 {
    char ch;
    printf("Enter Character:");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        printf("%c is an alphabet...",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit...");
    }
    else
    {
        printf("%c is special character...");
    }

 }
 