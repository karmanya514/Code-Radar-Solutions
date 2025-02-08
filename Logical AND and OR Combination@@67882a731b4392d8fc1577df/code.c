
#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Checking conditions using AND (&&) and OR (||)
    if (num1 == 0 && num2 == 0) {
        printf("True");
    } 
    else if (num1 > 0 || num2 < 0) {
        if (num1 > 0) {
            printf("False");
        }
        if (num2 < 0) {
            printf("False");
        }
    }

    return 0;
}
