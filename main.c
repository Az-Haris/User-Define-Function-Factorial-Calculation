#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a Number for calculating Factorial : ");
    scanf("%d", &num);

    printf("%d! is = %d", num, factorial(num));


    getch();
    return 0;
}

int factorial(int number)
{
    int i, fact=1;
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    return fact;
}
