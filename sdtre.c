#include<stdio.h>

int main(){
    int phy, maths, chemistry;
    float total;
    printf("Enter Phy marks\n");
    scanf("%d", &phy);
    printf("Enter maths marks\n");
    scanf("%d" ,&maths);
    printf("Enter chemistry marks\n");
    scanf("%d", &chemistry);
    total = (phy+maths+chemistry)/3;
    if((total<40)|| phy<33|| chemistry<33){
        printf("Your total percentage is %f and you are fail/n", total);
    }
    else{
        printf("Your total percentage is %f and you are pass\n", total);
    }
    return 0;
}