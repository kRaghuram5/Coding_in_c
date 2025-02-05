//Converting From Binary to Decimal
#include <stdio.h>
int convert(int);
void main()
{
    int dec, bin;
    printf("Enter a Binary number\n");
    scanf("%d", &bin);
    dec = convert(bin);
    printf("The Decimal Equivalent of %d is %d \n", bin, dec);
}
int convert(int bin)
{
    if (bin == 0)
    {
        return 0;
    }
    else
    {
        return (bin % 10 + 2 * convert(bin/10));
    }
}