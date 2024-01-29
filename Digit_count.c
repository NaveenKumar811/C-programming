#include<stdio.h>

void main()
{
    int number,count=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(number)
    {
        number/=10;
        count++;
    }
    printf("Given number is %d digits",count);
}
