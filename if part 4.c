#include<stdio.h>

int main()
{
    int a;

    printf("enter a integer");
    scanf("%d",&a);

    if(a%7==0)
    printf("Given number is divisible by 7");

    else
    printf("Given number is not divisible by 7");

    return 0;
}
