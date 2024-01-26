#include<stdio.h>

int main(){
    int num1, num2, num3, sum;
    printf("Enter three integer:");
scanf("%d %d %d", &num1, num2, &num3);
// calculate the sum
sum = num1 + num2 + num3;
printf("%d + %d +%d = %d", num1, num2, num3, sum);
    return 0;
}