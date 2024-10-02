#include<stdio.h>
int main(){
    double num1, num2, result;
    char operation;

    printf("Enter the operation you wanna perform(-,+,/,*):");
    scanf("%c", &operation);
    printf("Enter the Number 1:");
    scanf("%lf", &num1);
    printf("Enter the Number 2:");
    scanf("%lf", &num2);

    switch(operation){
        case '+':
        result = num1+num2;
        printf("\nResult: %.3lf", result);
        break;
        case '-':
        result = num1-num2;
        printf("\nResult: %.3lf", result);
        break;
        case '/':
        result = num1/num2;
        printf("\nResult: %.3lf", result);
        break;
        case '*':
        result = num1*num2;
        printf("\nResult: %.3lf", result);
        break;
        default:
        printf("%c is not valid operator", operation);

    }
}