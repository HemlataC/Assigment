#include<stdio.h>
int main()
{
	unsigned char num1,num2,add,mul,sub;

	printf("Enter Two no");
	scanf("%hu%hu",&num1,&num2);

	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;

	printf("add :%hu\n",add);
	printf("mul :%hu\n",mul);
	printf("sub :%hu\n",sub);
	return 0;
}
