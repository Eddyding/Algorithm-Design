#include<stdio.h>

#define N 7

/**
@return: -1 不成功 
         index,第一个匹配子串的第一个字符的位置， if success
原串：  s[0..n-1]
模式串：p[0..m-1]

*/
int
BruteForceStringMatch(char s[],int n,char p[],int m)
{
	int i,j;
/*
循环结束的终极条件是，原串必须预留下最后m个位置，
否则，不够比了。

*/
	for(i=0;i<=n-m;++i)
	{
		for(j=0;j < m;++j)
		{
			if(s[i+j] != p[j]) // don't equal, exit the inner for loop
				break;
		}
		if(m == j) return i; // find first match,return i
	}	
	return -1;
}
int
main()
{
	char s[]="NOBODY_NOTICED_HIM_NOT_HER";
	char p[]="NOT";
	
	int i,n = 0,m = 0;
	for(i=0; s[i]!= '\0';++i)
		++n;// get characters number
	for(i=0; p[i]!= '\0';++i)
		++m;// get characters number
	
	int iret = -2;

	iret = BruteForceStringMatch(s,n,p,m);
	if(-1 == iret)
		printf("don't match");
	else 
		printf("Match! the first position is %d",iret);
	printf("\n");
	return 0;
}
