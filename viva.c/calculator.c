#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char operator;

   

    scanf("%lf %lf", &num1, &num2);

    
    
    scanf(" %c", &operator);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Divide by zero\n");
            return 1; 
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            result = fmod(num1, num2);
        } else {
            printf("Modulo by zero\n");
            return 1; 
        }
    } else if (operator == '^') {
        result = pow(num1, num2);
    } else {
        printf("Invalid operator\n");
        return 1;      }

    
    printf("%.2lf %c%.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;  
}
