#include<stdio.h>
int main()
{
int n,count;
printf("Enter the value of n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("The number of digits in integer %d is %d",n,count);
}
