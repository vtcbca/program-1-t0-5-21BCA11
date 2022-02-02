#include<stdio.h>
#include<conio.h>
 void main()
{
	int n,r,sum=0,temp;
	printf("Enter your Number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	  {
	    printf("Your Number Palindrome");
	  }
	  else
	  {
	    printf("Ypur Number is Not Palindrome");
	  }
	getch();
}