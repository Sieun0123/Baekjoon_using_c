#include <stdio.h>

int main(void){
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
    printf("%.20lf", num1 / num2);
}
