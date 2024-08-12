 #include <stdio.h>

 void main()
 {
    int temp;
    printf("enter temprature:");
    scanf("%d",&temp);

    if(temp<0)
    {
        printf("Freezing Weather");
    }
    else if(temp<=10)
    {
        printf("very cold Weather");
    }
    else if(temp<=20)
    {
        printf("cold weather");
    }
    else if(temp<=30)
    {
        printf("normal weather");
    }
    else if(temp<=40)
    {
        printf("hot temprature");
    }
    else
    {
        printf("very hot temprature");
    }
 }