#include<stdio.h>

void main()
{
    int num;
    printf("Which table you want? ");
    scanf("%d",&num);
    printf("%d table\n",num);
    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",i,num,i*num);
    }
}
