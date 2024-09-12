 #include<stdio.h>
int main()
{
	 int num;
	 
	 printf("enter an integer");
	 scanf("%d",&num);
     	
	 if(num>0)
	 {
	   printf("The num %d is positive\n",num);
       	 }
	else if(num<0)
	{
	 printf("The num %d is negative\n",num);
	}

return 0;
}
