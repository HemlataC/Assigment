#include<stdio.h>
int main()
{
	int num;
        int temp,rem,rev=0;
	printf("Enter the no");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
	  rem=num%10;
	  rev=rev*10+rem;
	  num=num/10;
	}
	if(temp==rev)
	printf("\nthe given no is palindrome!");
	else
	printf("\nthe given no is not palindrome");
	
	return 0;
}
