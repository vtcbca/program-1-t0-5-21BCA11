/*Write a Program to enter a number and check number is amstrong or not
 Date:26th December 2021
 Author:Divyang Chaudhari*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	int a,b,sum=0;
	clrscr();
	printf("Enter Value:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	 {
	  sum=sum+(a%10)*(a%10)*(a%10);
	  a=a/10;
	 }
	if(b==sum)
	  {
	   printf("\n %d is Amstrong Number",b);
	  }
	 else
	  {
	   printf("\n %d is Not Amstrong Number",b);
	  }
	 getch();
}