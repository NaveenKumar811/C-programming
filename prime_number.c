#include<stdio.h>

void main()
{
 int num;
 printf("Enter number: ");
 scanf("%d",&num);
 printf("Prime numbers between 1 and %d :\n",num);
 for(int i=2; i<=num; i++)
 {
     int count=0;
     for(int j=2; j<i; j++)
     {
         if(i%j==0)
            count++;
     }
     if(count==0)
        printf("%d ",i);
 }
}
