#include<stdio.h>

int main()

{

    int i,j,table;

	for(i=1;i<=10;i++)
	{

		  for(j=1;j<=10;j++)
		  {
			   table = i*j;
			   printf("%d x %d = %d\t", i, j, table);
		  }
		  printf("\n");
	}


	return 0;
}
