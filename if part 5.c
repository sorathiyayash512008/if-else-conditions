#include <stdio.h>

int main()
{
    int gross_sales,discount,net_sales;
    
    printf("Enter gross sales:");
    scanf("%d",&gross_sales);
    
    if(gross_sales>20000)
    {
        discount = 0.15*gross_sales;
        net_sales = gross_sales-discount;
        
        printf("Net SAles is =%d\n",net_sales);
    }
    
    if(gross_sales>10000 && gross_sales<20000)
    {
        discount=0.10*gross_sales;
        
        net_sales = gross_sales-discount;
        
        printf("Net Salses is = %d\n",net_sales);
    }
    
    if(gross_sales<10000)
    {
        discount=0.05*gross_sales;
        
        net_sales=gross_sales-discount;
        
        printf("Net Sales is = %d\n",net_sales);
    }
    return 0;
}


