#include<stdio.h>

// Function to check palindrome 
int palindrom(int num)
{ 
	int sum,n,j;
	for(sum=0,n=num;n;n=n/10)
	{ 
		j=n%10;
		sum=sum*10+j;
	}
	if(sum==num)
		return 1;
	else
		return 0;
}
void main()
{
	printf("Enter numer\n");
	int num,r;
	scanf("%d",&num);
        r=palindrom(num);
	if(r == 1)
		printf("your enter number is palindrom number\n");
  	else
		printf("your enter number is not palindrom number\n");
}
			



