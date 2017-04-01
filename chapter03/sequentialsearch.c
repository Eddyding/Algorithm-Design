#include<stdio.h>

#define N 7


/**
@return: -1: 查找失败

*/
int sequentialsearch(int a[],int key)
{
	int i;
	// key
	a[N] = key;
	i = 0;
	while( a[i] != a[N])
	{
		i++;
	}	
		
	if(i<N) return i;
	else return -1;
}

int
main()
{
	int a[N+1] = {89,45,68,90,29,34,17,0};
	int i,j=0;
	j = sequentialsearch(a,100);
	if(-1 == j)
		 printf("not found\n");
	else 
		printf("the key element is in %d index\n",j);
	return 0;
}
