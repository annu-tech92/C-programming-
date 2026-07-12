#include<stdio.h>
void armstrong(int n);
int main(){
    int num;
    printf("enter a number:-");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}
void arnstrong(int a){
    int temp,digit,sum=0,n;
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("Armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}