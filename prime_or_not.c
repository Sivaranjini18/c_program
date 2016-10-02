#include<stdio.h>
int main()
{
int i,primeno=0,n;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
++primeno;
}
}
if(primeno==2)
{
printf("Entered no is prime no");
}
else
{
printf("Entered no is not a prime no");
}
}