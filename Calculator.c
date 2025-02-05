/*Demonstrating the simple computational problems using arithmetic expressions and use of each
 operator leading to implementation of a calculator.*/
#include<stdio.h>
int main()
{
    int a, b;
    char choice;
    printf("Enter your choice\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%c", &choice);
    printf("Enter values for a & b\n");
    scanf("%d%d", &a, &b);
    switch(choice)
    {
        case '1': printf("%d + %d = %d\n", a, b, (a+b));
        break;
        case '2': printf("%d- %d = %d\n", a, b, (a-b));
        break;
        case '3': printf("%d x %d = %d\n", a, b, (a*b));
        break;
        case '4': printf("%d / %d = %d\n", a, b, (a/b));
        break;
        default: printf("You entered wrong choice\n");
        break;
    }
    return 0;
}