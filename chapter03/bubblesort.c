
#include<stdio.h>

#define N 7

int
main()
{
	int a[N] = {89,45,68,90,29,34,17};
	int i,j;
	
	int temp;
	for(i = 0;i<=N-2;++i)
	{
		for(j = 0;j<=N-2-i;++j) // the upper bound is changing!
		{
			if(a[j] > a[j+1])
			{//swap
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}	
		}
	}
	
	for(i=0;i<=N-1;++i)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
