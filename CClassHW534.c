#include <stdio.h>

int power(int base , int exponent){
    if (exponent == 1){
        return base;
    }
    return base * power(base, exponent - 1);
}

int main(){
    int base , exponent;

    printf("Enter base and exponent (>=1): ");
    scanf("%d %d", &base , &exponent);

    int result = power(base , exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}