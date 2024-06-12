#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area, circum;
    printf("Enter radius of circle :");
    scanf("%d",&r);
    circum=2*PI*r;
    area=PI*r*r;
    printf("The area of circle is:%f",area);
    printf("\n The circumference of circle is:%f",circum);
    return 0;
}
