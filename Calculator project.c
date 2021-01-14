#include <stdio.h>
#include <conio.h>
void main() {
    char ch;
    double num1,num2;
    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &ch);
    printf("Enter two operands: ");
    printf("\n");
    scanf("%lf %lf",&num1,&num2);
    switch(ch) {
    case '+':
        printf("Your Answer: %lf",num1+num2);
        printf("\n");
        break;
    case '-':
        printf("Your Answer: %lf",num1-num2);
        printf("\n");
        break;
    case '*':
        printf("Your Answer: %lf",num1*num2);
        printf("\n");
        break;
    case '/':
        printf("Your Answer: %lf",num1/num2);
        printf("\n");
        break;
    default:
        printf("Sorry! Incorrect Operator");
    }
    getch();
}
