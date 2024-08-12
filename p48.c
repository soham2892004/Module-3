 #include <stdio.h>

 void main()
 {
    int Maths,Physics,Chemistry,Total,TotalMathsPhysics;

    printf("enter marks for Maths:");
    scanf("%d",&Maths);

    printf("\nenter marks for Physics:");
    scanf("%d",&Physics);

    printf("\nenter marks for Chemistry:");
    scanf("%d",&Chemistry);

    Total=Maths+Physics+Chemistry;
    TotalMathsPhysics=Maths+Physics;

    if((Maths>=65)&&(Physics>=55)&&(Chemistry>=50)&&((Total>=190)||(TotalMathsPhysics>=140)))
    {
        printf("candidate is eligible for this course");
    }
    else
    {
        printf("candidate is not eligible for this course");
    }
 }