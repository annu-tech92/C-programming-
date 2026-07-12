#include<stdio.h>
int main()
{
    int a[5],i;
    float per;
    float sum=0;
    printf("enetr marks of 10 subject:-");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    sum=sum+a[i];
    }
    printf("total number %f  ",sum);
    per=(sum/500)*100;
    printf("percentage is %f ",per);


}