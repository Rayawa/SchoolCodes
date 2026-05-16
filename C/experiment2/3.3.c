#include <stdio.h>

int main() {
    int peach = 1;
    int day;
    for (day = 9; day >= 1; day--) {
        peach = (peach + 1) * 2;
    }
    printf("第1天共摘了%d个桃子\n", peach);

    return 0;
} 
