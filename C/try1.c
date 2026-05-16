#include <stdio.h>
int main()
{
    int x=9;
    for(;x>0;x--)
    {
        if(x%3==0)
        {
            printf("%d",--x);
            continue;
        }
    }
    return 0;
}