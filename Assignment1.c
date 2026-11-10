#include <stdio.h>

int main() {
    int a, b, c, d, e, f, ch;

    while (1) {
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if (ch == 5) {
        printf("Exiting..\n");
    break;
 }

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (ch) {
    case 1:
    c = a + b;
    printf("Result is %d\n", c);
    break;

    case 2:
    d = a - b;
    printf("Result is %d\n", d);
    break;

    case 3:
    e = a * b;
    printf("Result is %d\n", e);
    break;

    case 4:
    if (b != 0) {
    f = a / b;
    printf("Result is %d\n", f);
    } else {
    printf("Cannot divide by zero\n");
    }
    break;

     default:
     printf("Invalid choice\n");
 }
 }

    return 0;
}
