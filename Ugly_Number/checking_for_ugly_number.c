#include<stdio.h>
void main()
{
int i,j,f=0,g=0;
printf("enter a number:");
scanf("%d",&n);//enter a number to check if the number is ugly or not
for(i=2;i<=n;i++)
{
f=0;
for(j=2;j<i;j++)// to check if the factor is prime or not
{
if(i%j==0)
{
f=1;
break;
}
}
if(f!=1)
{
if(i==2 || i==3 || i==5)
continue;
else
{if(n%i==0)
g=1;
break;
}}}}
if(n==1 || g==0)
printf("%d is an ugly number",n);
else
printf("%d is not an ugly number",n);
}
