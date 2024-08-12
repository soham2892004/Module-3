 #include <stdio.h>

 
    void main()
    {
        int height;

        printf("enter height:");
        scanf("%d",&height);

        if(height<0)
        {
            printf("invalid Input for height...");
        }
        else if(height<150)
        {
            printf("person are consider short person...");
        }
        else if(height<170)
        {
            printf("person's height is average height...");
        }
        else if(height<190)
        {
            printf("person are consider tall person...");
        }
        else
        {
            printf("person are vary Tall");
        }
    }
 