#include<stdio.h>

int main()
{
    int a,b,c;
    //for smallest one
    printf("enter three integers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c)
    printf("smallest value is =%d",a);

    else if (b<a && b<c)
    printf("smallest value is =%d",b);

    else
    printf("smallest value is %d",c);

    //for greater one

    if(a>b && a>c)
    printf("largest value is =%d",a);

    else if (b>a && b>c)
    printf("largest value is =%d",b);

    else
    printf("largest value is =%d",c);

    return 0;
}
