#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d" , &number);

    int i, rem , sum=0;

    for(i=1 ; i<number ; i++)
    {
        rem=number%i;
        if(rem == 0)
        {
            sum = sum + i;
        }
    }
    if ( sum == number)
        printf("Perfect number");
    else
        printf("No");
    return 0;
}
