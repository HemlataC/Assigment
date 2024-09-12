#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
       if(num%2==0)
	{
	 printf("the number is even or odd");
	} 
	else
	{
	 printf("The number %d is even\n",num);
	}
return 0;
}
