#include<stdio.h>
int main()
{
	int i,j,n,s=1,c;
	
	printf("\nEnter the value of n");
	scanf("%d",&n);
	printf("\nDo you want to continue or exit [1/0].....[1] for con....[0] for exit:");
	scanf("%d",&c);
	if(c==1 && n>0)
	{
	
		for(i=1; i<=n; i++)
		{
			s=s*i;
		}
		printf("\nThe factorial of %d is %d", n, s);
	}	
	if(n<0)
		printf("\nCant find the factorial");
	if(n==0)
		printf("\nThank you");
	return 0;
	
}