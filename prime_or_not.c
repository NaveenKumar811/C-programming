#include<stdio.h>

void main()
{
    int num, count=0;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
            count++;
    }
    if(count==0)
        printf("%d is Prime number",num);
    else
        printf("%d is not a Prime number",num);
}
