#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter no. of rows:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("01");
		}
	printf("\n");
	}
}
