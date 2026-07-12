#include<stdio.h>
int main()
{
    int i,n,count;
    printf("enter a number");
    scanf("%d",&n);
    count=0;
    while(i<=n)
    {
        count=count*i;
        printf("%d",count);
        i++;
    }
}