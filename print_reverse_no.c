#include <stdio.h>
int main()
{
    int n, rev = 0, remain;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remain = n%10;
        rev = rev*10 + remain;
        n =n/10;
    }

    printf("Reversed Number is %d",rev);
}