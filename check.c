#include<stdio.h>

int main(){
    int n = 14, Prime = 1;
    for(int i = 2;i<n; i++){
        if(n%i ==0){
            Prime = 0;
            break;
        }
    }
    if(Prime == 0 && n!=2){
        printf("This is not a Prime number");
    }
    else{
        printf("This is a Prime number");
    }
    return 0;
}