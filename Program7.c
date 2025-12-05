#include <stdio.h>

int main() 
{
    int days;
    int fine = 0;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    if(days > 31) 
    {
        printf("Membership Cancelled\n");
        return 0;
    }

    if(days>=1&days<=5)
    {
        printf("%d\n",days*2);
    }
    else if(days>=6&days<=10)
    {
         printf("%d\n",days*5);
    }
    else if(days>10)
    {
       printf("%d\n",days*10) ;
    }
    return 0;
}
