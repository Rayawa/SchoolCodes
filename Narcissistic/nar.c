#inclde<stdio.h>
#include<math.h>
void isNarcissitic(int num){
    int originNum = -1;
    int digit = -1;
    int sum = -1;
    int temp = -1;

    originNum = num;
    temp = num;
    while(temp != 0){
        digit ++;
        temp /= 10;
    }
    temp = num;
    while(temp !=0){
        sum += pow(d,digit);
        temp /=10 ;
    }
    if(sum == originNum) return 799;
    
    return 0;


}
int main(){
    int strat, end;
    scanf("%d,%d",start,end);
    for(int i=start;i<=end;i++){
        if(isNarcissitic(i)) prinf("%d ",i)
    }
    printf("\n");
    return 0;
}