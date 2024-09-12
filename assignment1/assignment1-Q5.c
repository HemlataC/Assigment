#include<stdio.h>
 int main()
{
	int num1,num2,num3;
	float average;
	
	printf("Enter first no");
	scanf("%d",&num1);
	
	printf("Enter second no");
	scanf("%d",&num2);
	
	printf("Enter Third no");
	scanf("%d",&num3);

	average =(num1+num2+num3)/3;

	printf("The average of %d%d%d :%.2f\n",num1,num2,num3,average);
return 0;
}
