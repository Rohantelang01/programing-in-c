#include <stdio.h>
#define PI 3.14159
int main(){
 double radius,area;
 printf("Enter the radius of circel \n");
 scanf("%lf",&radius);
 area = PI * (radius * radius);
 printf("the area of radius %.2lf is %.2lf",radius,area);
 return 0;
}