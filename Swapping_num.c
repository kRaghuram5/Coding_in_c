//program to swap two numbers without using a temporary value

#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("original number before swap a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d b=%d\n", a, b);
}