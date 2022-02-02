#include<stdio.h>
#include<conio.h>
 void main()
{
	int n,i,c=0;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&n);
	i=2;
	while(i<=n/2)
	{
	if(n%i==0)
	   {
		c=1;
		break;
	    }
	i++;
	}
	if(c==0)
	{
		printf("%d is a Prime Number",n);
	}
	else
	{
		printf("%d is not a Prime number",n);
	}
	getch();
}
