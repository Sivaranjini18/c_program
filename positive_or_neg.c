#include <stdio.h>
int main()
{
    int no;

    printf("Enter a number: ");
    scanf("%d", &no);

    if (no <= 0)
    {
        if (no == 0)
            printf("You entered 0");
        else
            printf("You entered a negative number");
    }
    else
        printf("You entered a positive number.");
    return 0;
}