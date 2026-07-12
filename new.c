#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
void main(){
int choice,x,y;
printf("======================CALCULATOR=====================\n");
printf("1. ADDITION\n");
printf("2. SUBTRACTION\n");
printf("3. MULTIPLICATION\n");
printf("4. DIVISION\n");
printf("enter your choice:- ");
scanf("%d",&choice);
printf("enter two number:-");
scanf("%d%d",&x,&y);
if(choice==1)
{
    printf("addition is :-%d",add);
}
else if(choice==2)
{
    printf("subtraction is :-%d",sub);
}
else if(choice==3)
{
    printf("multiplication is :-%d",mul);
}
else if(choice==4)
{
    printf("division is:-%d",div);
}
else
{
    printf("invaild number");
}

}