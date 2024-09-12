#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter two integer");
	scanf("%d%d",&num1,&num2);

	if(num1>num2)
	{
	 printf("The maximum num is %d\n",num1);
	}
	else
	{
	printf("The maximum num is %d\n",num2);
	}
return 0;
}
