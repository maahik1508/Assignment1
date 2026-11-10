#include <stdio.h>

int main() {
    int n;
    int fact = 1, i = 1; 

    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n) { 
        fact = fact * i; 
        i++;            
    }
    printf("The factorial of %d is %d\n", n, fact);

    return 0;
}
