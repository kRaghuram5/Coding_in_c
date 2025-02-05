 /*program to perform a binary search for a given key integer in a single dimensional array of numbers in ascending order and report success or failure in the form of a suitable message*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],n,i,key,low,mid,high;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("ELEMENT %d FOUND AT POSITION %d\n",key,mid+1);
            exit(0);
        }
        else if (a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    printf("UNSUCCESSFULL SEARCH\n");
    return 0;
}