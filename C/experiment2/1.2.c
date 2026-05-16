#include <stdio.h>
#define PI 3.14  

int main() {
    float r, h;
    scanf("%f %f", &r, &h);
    float circumference = 2 * PI * r;           
    float circle_area = PI * r * r;            
    float sphere_area = 4 * PI * r * r;         
    float sphere_volume = 4.0 / 3 * PI * r * r * r; 
    float cylinder_volume = PI * r * r * h;     
  
    printf("圆周长：%.2f\n", circumference);
    printf("圆面积：%.2f\n", circle_area);
    printf("圆球表面积：%.2f\n", sphere_area);
    printf("圆球体积：%.2f\n", sphere_volume);
    printf("圆柱体积：%.2f\n", cylinder_volume);
    return 0;
}