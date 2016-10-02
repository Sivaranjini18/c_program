#include<stdio.h>
int main()
{
char c;
printf("Enter your character");
scanf("%s",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("The entered char is vowel");
}
else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("Entered Charavter is vowel");
}
else
{
printf("The entered char is consonant");
}
}