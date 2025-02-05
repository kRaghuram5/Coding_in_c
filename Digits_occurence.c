//program to find the sum of all the digits and occurrence of a digit in the number.

#include<stdio.h>
void main( )
{
    int num,rem,temp,sum=0,count=0,key;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("Enter a digit to check its occurence in %d:",num);
    scanf("%d",&key);
    temp=num;
    while(num != 0 )
    {
        rem = num%10;
        sum = sum+rem;
        num =num/10;
        if(key==rem)
        count++;
    }
    printf("Sum of digits in %d is %d \n",temp,sum);
    printf("Occurence of %d in %d is %d \n",key,temp,count);
}