#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two integers:");
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        printf("%d is greater than %d\n",b,a);
        printf("%d is smaller than %d",a,b);
    }

    else
    {
        printf("%d is greater than %d\n",a,b);
        printf("%d is smaller than %d",b,a);
    }

    return 0;
}
