#include<stdio.h>
/*Hello	*/
int f(int *p,int n)
{
	int a;
	if(n<=0) a=0;
	else if(*p%2==0)  a=*p+f(p+1,n-1);
	else a= *p-f(p+1,n-1);	
	printf("\n%d",a);
	return a;
}
int main()
{
	int arr[]={14,11,13,4,6,12};
	printf("\n%d",__LINE__);
	printf("\n%s",__FILE__);
	printf("\n%s",__DATE__);
	printf("\n%s",__TIME__);
	printf("\n%d",__LINE__);
	printf("\n%d",__STDC__);
	printf("\n %d ",f(arr,6));
	return 0;
}
