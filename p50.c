 #include <Stdio.h>

 void main()
 {
    int angle1,angle2,angle3;

    printf("enter value for 3 angles:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    if(angle1+angle2+angle3==180)
    {
        printf("these angles values create valid triangle...");
    }
    else
    {
        printf("these angle values don't create valid triangle");
    }
 }