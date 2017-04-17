#include<stdio.h>
#include<limits.h>


struct pair{
 int p1index; // 第1个点的下标
 int p2index; // 第2个点的下标
};


/**
@param: px[]= x0,x1,...,xn-1
@param: py[]= y0,y1,...,yn-1
*/
struct pair 
bruteForceClosestPoints(int px[],int  py[],int n)
{
 int dmin = INT_MAX;
 int i,j,derta;
 int index1,index2;
 struct pair ret;
 
 // 只考虑i<j,一对点，只需要计算一次。
 for(i=0;i< n-1;++i)
 {
 	for(j=i+1;j<= n-1;++j)
 	{
 	  derta= (px[i]-px[j])*(px[i]-px[j])+(py[i]-py[j])*(py[i]-py[j]);
 	  if(derta < dmin)
 	  {
 	  	 dmin = derta;
 	     index1 = i;
 	     index2 = j;
 	  }
 	}
 }
  
  // composite
  ret.p1index = index1;
  ret.p2index = index2;
  
  return ret;
}


int
main()
{
	int px[] = {1,1,2,2},py[] = {2,5,4,7};
	struct pair  ret ;
	
	ret =  bruteForceClosestPoints(px,py,4);
	 printf("ret.p1index is %d \t ret.p2index is %d\n",ret.p1index,ret.p2index);
	
	printf("最近对的点坐标为：p1 = (%d,%d) ; p2 =(%d,%d)\n",
	px[ret.p1index],py[ret.p1index],px[ret.p2index],py[ret.p2index]);

	return 0;
}
