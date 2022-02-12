#include<stdio.h>
#include<math.h>
 int main()
{
    float radius;
    float area;
    float diameter;
    float circumference;
    float r,a,d,c;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    
    area = M_PI*r*r;
    
    diameter = 2*r;
    
    circumference = 2*M_PI*r;
    
    printf("Area of the circle=%f \n",area);
    printf("Diameter is=%f \n", diameter);
    printf("Circumference is %f", circumference);
    return 0;
    
}
