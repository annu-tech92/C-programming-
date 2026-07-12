#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n:-");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i%2!=0)
        {

            printf("%d  ",i);
        }
    }
}