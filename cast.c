#include<stdio.h>
struct address
{
	char *add_line;
	char *region;
	char *country;
	
};
void print_it(void *param){
	int *i=(int*)param;
	printf("Casted Param : %d",*i);
}
void print_address(void *param)
{
	struct address *my_address=(struct address*)param;
	printf("\nAddress :\n\t%s\n\t%s\n\t%s",my_address->add_line,my_address->region,my_address->country);
}


int main(){	
	struct address address1;
		 
	/*address1.add_line="#3, 2nd Main, Baytaranapura";
	address1.region="Bengaluru";
	address1.country="India";*/
	//print_address(&address1);
	//print_it(t);
	int a=25;
	int b;
	a>>1;
	printf("\n%d",a);
	printf("\n%d",b);	
	printf("\n%d",a>>1);
	return 0;
}

