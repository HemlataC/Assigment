#include<stdio.h>
int main()
{
	int discount,price,quantity;
	int discount_price,res;
	
	printf("Enter the quantity");
	scanf("%d",&quantity);

	quantity=(quantity*5);
	if(quantity>30)
	   if(quantity<50)
	{
	  discount=(quantity-(0.1)*quantity);
	 printf("discount=%d\n",discount);
	} 
	else if(quantity>50)
	{
	   discount=(quantity-(1.5)*quantity);
	   printf("\ndiscount=%d\n",discount);
	}	
	else{
	printf("\nno discount!\n");
	return 0;
}
return 0;
}
