#include <stdio.h>

int main()
{
    int sub1,sub2,sub3, total;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);


    if (sub1 < 35 || sub2 < 35 || sub3 < 35)
    {
        printf("Result: Fail\n");
    }
    else
    {
        total = sub1 + sub2 + sub3;
        avg = total / 3.0;
        
        printf("Total Marks = %d\n", total);
        printf("Average Marks = %.2f\n", avg);
    

        
        if (avg >= 70)
           {
               printf("Result: Distinction\n");
           }
        else if (avg >= 60)
           {
               printf("Result: First Class\n");
           }
        else if (avg >= 50)
           {
               printf("Result: Second Class\n");
           }
        else if (avg >= 35)
           {
               printf("Result: Third Class\n");
           }
        
        else
           {
               printf("Result: Fail\n");
           }
    }

    return 0;
}
