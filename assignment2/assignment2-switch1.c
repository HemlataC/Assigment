#include<stdio.h>
int main()
{
	int month;
	printf("Enter month number(1-12):");
	scanf("%d",&month);

	switch(month)
	{
	case1:
	     printf("31 days");
		break;
	case2:
	    printf("28/29 days");
		break;
	case3:
	   printf("31 days");
	     break;
	case4:
	 printf("30 days");
		break;
	case5:
	 printf("31 days");
		break;
	case6:
	 printf("30 days");
	      break;
	case7:
	printf("31 days");
	   break;
	case8:
	printf("31 days");
	   break;
	case9:
	printf("30 days");
	  break;
	case10:
	printf("31 days");
	  break;
	case11:
	printf("30 days");
	   break;
	default:
	 printf("invalid input 1 please enter month number between 1-12");
	}
	return 0;
	
}
