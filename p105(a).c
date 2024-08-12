 #include <stdio.h>


struct Point {
    int x;
    int y;
};

int main() {
    
    struct Point myPoint;


    myPoint.x = 3;
    myPoint.y = 5;

    
    printf("Coordinates: (%d, %d)\n", myPoint.x, myPoint.y);


}
