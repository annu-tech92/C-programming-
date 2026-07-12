#include<stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("enter two number:-");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
    printf("a=%d \nb=%d",a,b);

}