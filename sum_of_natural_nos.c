#include<stdio.h>
void main()
{
int sum=0,k,n=1;
printf("Enter the value that how many times natural no is to be added");
scanf("%d",&k);
while(n<=k)
{
sum=sum+n;
++n;
}
printf("%d",sum);
}