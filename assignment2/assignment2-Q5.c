#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter three num");
	scanf("%d%d",&num1,&num2,&num3);
	
	if(num3>=num2 && num2>=num3);
	{
	   max=num1;
	}
	else if(num2>=num1 && num2>=num3);
	{
	  max=num2;
	}
	else
	{
	  max=num3;
	}
	printf("the max of the three no is:%d\n",max);
	
	return 0;
}

