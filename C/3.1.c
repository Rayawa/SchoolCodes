#include<stdio.h>
#include<math.h>
int main() 
{
    float r=0.07;
    float n=10;
    float p;
    p=pow(1+r,n);
    printf("p=%.6f\n",p);
    return 0;
}