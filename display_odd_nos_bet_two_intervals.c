#include<stdio.h>
int main()
{
int a,b,i;
printf("Enter two intervals");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
if(i%2!=0)
{
printf("%d is odd number between %d and %d\n",i,a,b);
}
}
}