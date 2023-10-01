/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result.*/
#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter The Radius of Circle: ");
    scanf("%f",&r);
    area=2*3.14*r;
    printf("The Area of Circle is %.2f",area);
    return 0;
}
