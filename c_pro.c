#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch(operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default: printf("Invalid operator!"); return 1;
    }
    
    printf("Result: %.2f\n", result);
    return 0;
}