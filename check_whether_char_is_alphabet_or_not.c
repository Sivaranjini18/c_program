#include<stdio.h>
int main()
{
char c;
printf("Enter the character");
scanf("%c",&c);
if(c>='a'&&c<='z')
{
printf("The entered char is lower case alphabet");
}
else if(c>='A'&&c<='Z')
{
printf("The entered character is upper case alphabet");
}
else
{
printf("The entered char is not alphabet");
}
}