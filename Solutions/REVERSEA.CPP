/*Write a program to print number in reverse which can given by user
 Date:22nd December 2021
 Author:Divyang Chaudhari*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	int a,r;
	clrscr();
	printf("\nEmter Number:");
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
	getch();
}