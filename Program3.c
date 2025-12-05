#include <stdio.h>

int main()
{
    int age, distance;
    char name[50];
    float price;

    printf("Enter passenger name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter travel distance: ");
    scanf("%d", &distance);
    price = distance * 3;
    if(age < 5)
    {
        price = 0 free;
    }
    else if(age > 60)
    {
        price = 0.5;
    }
    printf("Name     : %s\n", name);
    printf("Age      : %d\n", age);
    printf("Distance : %d km\n", distance);
    printf("Price    : %.2f\n", price);

    
    return 0;
}
