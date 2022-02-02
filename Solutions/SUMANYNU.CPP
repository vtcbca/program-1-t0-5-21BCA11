/*Write a Program to enter any number and print sum of digit
 Date:23rd December 2021
 Author:Divyang Chaudhari*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	int n,sum=0,a;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	while(n>0)
	{
	 a=n%10;
	 sum=sum+a;
	 n=n/10;
	}
	printf("Your Numbers Sum is %d",sum);
	getch();
}