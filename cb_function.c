#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int evalute(int (*operation)(int,int),int a,int b )
{
	return (operation)(a,b);
}
int  main(){
	int a=10,b=20;
	int (*p_opr)(int,int)=NULL;
	p_opr=&sum;
	printf("\nThe Sum is : %d",evalute(p_opr,a,b));
	p_opr=&sub;
	printf("\nThe Sub is : %d",evalute(p_opr,a,b));
	
	return 0;
}
