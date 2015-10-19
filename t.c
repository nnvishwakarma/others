#include<stdio.h>
int main()
{

	int a[]={2,3,4,5,6,7};	
	int *p=&a;
	printf("\n%d",*++p);
	printf("\n%d",a);
	printf("\n%d",5[a]);
	printf("\n%d",a[5]);
	return 0;
}
