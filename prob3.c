#include<stdio.h>

int main(){
    int lenght, breath;
    printf("What is the lenght of the rectangle\n");
    scanf("%d", &lenght);
    printf("what is the breath of the rectangle\n");
    scanf("%d", &breath);
    printf("The area of rectangle is %d", lenght*breath);
    return 0;
}