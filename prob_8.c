 #include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Table of %d:\n", number);
    
    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}
