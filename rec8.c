#include<stdio.h>
int sum(int n);
int main(){
    int number, result;
    printf("Enter the positive interger: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}
int sum(int n){
    if (n !=0)
    // sum() function calls itself
    return n + sum(n-1);
    else
    return n;
}