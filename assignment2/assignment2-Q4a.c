//using conditional operator
#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("Enter two int");
	scanf("%d%d",&num1,&num2);

	max=(num1>num2)?num1:num2;
	printf("the max number is %d\n",max);
return 0;
}
