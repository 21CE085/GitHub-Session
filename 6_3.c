// This code is prepared by kunj dholariya 22CE027
// Use break statement 
#include<stdio.h>
int main()

{
    int price,total=0,i;

    {
        for(i=1;i++;)
        {
    printf("Enter the numbers one after another for each item and enter 0 at end:");
    scanf("%d",&price);
            if(price==0)
                break;
            else
                total+=price;
        }
    }
    printf("Customer have to pay:%d",total);
    printf("\nThis programme made by kunj dholariya 22CE027");
   return 0;
}