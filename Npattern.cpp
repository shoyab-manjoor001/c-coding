#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,k,m;
	scanf("%d",&n);
	m=1;
	if(n%2==0)
		k=n+1;
	else
		k=n;
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j==(k/2)+1 && i>1 && i<=n)
			{
				printf("%d",m++);
			}
			else
			{
				printf("%d",n);
			}
		}
		printf("\n");
	}
	return 0;
}
