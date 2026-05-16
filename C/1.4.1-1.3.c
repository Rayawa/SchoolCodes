#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int max(int x,int y);
    int a,b,n;
    scanf("%d,%d",&a,&b);
    n=max(a,b);
    printf("max=%d\n",n);
    return 0;
}