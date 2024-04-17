#include <stdio.h>
#include<math.h>
int main()
{
    float Height,Base, Area;
    printf("Enter Height of triangle \n");
    scanf("%f", &Height);
    printf("Enter Base of triangle \n");
    scanf("%f", &Base);
    Area=0.5*Height*Base;
    printf("The Area of triangle is %f", Area);
    return 0;
}
