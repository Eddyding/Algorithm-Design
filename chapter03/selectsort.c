#include<stdio.h>

#define N 7

int
main()
{
	int a[N] = {89,45,68,90,29,34,17};
	int i,j;
	
	int k,temp;//k: minimum element subscript
	for(i = 0;i<=N-2;++i)
	{
		k = i;// assume a[i] is the minimum element
		for(j = i+1;j<=N-1;++j)
		{
			if(a[j] < a[k])
			{
				k = j;
			}	
		}
		// swap
		// don't  judge 
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
	
	for(i=0;i<=N-1;++i)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
