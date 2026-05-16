#include <stdio.h>

int main() {
    int hundreds, tens, units;
    int num;

    printf("所有的水仙花数有\n");
    for (num = 100; num <= 999; num++) {
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;
        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == num) {
            printf("%d\n", num);
        }
    }

    return 0;
} 