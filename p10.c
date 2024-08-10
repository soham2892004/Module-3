#include <stdio.h>

void main()
{

    int l,w,h,Area;

    printf("enter value of Length,Width,Height:\n");
    scanf("%d %d %d",&l,&w,&h);

    Area=2*(l*w+w*h+l*h);

    printf("Area of Rectangular prism:%d\n",Area);

}
