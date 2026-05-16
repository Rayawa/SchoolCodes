#include <iostream>
#include <cmath>
using namespace std;
bool isNarcissistic(int num){
    int originNum = -1;
    int temp = -1;
    int digit = -1;
    int sum = -1;
    originNum = num;

    temp = num;
    while(temp!=0){
        digit++;
        temp /= 10;
    }
    temp = num;
    while (temp!=0){
        sum += pow(d,digit);
        temp /= 10;
    }
    if(sum == originNum) return true;
    
    return false;
}
int main(){
    int start = -1;
    int end = -1;
    cin >> start >> end;
    for(int i=start;i<=end;i++){
        if(isNarcissistic(i)) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}