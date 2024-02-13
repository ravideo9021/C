//Points Falling on Same Line

#include <stdio.h>

int main(){

    int x1, x2, x3, y1, y2, y3;

    printf("Enter the coodinates for point 1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coodinates for point 2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter the coodinates for point 3: ");
    scanf("%d %d", &x3, &y3);

    int slope1 = (y2-y1)/(x2-x1);
    int slope2 = (y3-y2)/(x3-x2);

    if (slope1 == slope2) 
    printf("points are collinear");

    else printf("points are not collinear");

return 0;
}