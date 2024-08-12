 #include <stdio.h>

void main() 
{
    int no;
    int factorial = 1; 

    printf("Enter a number: ");
    scanf("%d", &no);

    
    if (no < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else 
    {
        int i = 1;

        
        while (i <= no) 
        {
            factorial *= i;
            i++;
        }

        printf("Factorial of %d = %lld\n", no, factorial);
    }


}
