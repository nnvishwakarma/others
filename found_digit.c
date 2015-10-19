/*To Find out the Number of specific degits. Within given limits*/
#include<stdio.h>
int occurrence [9]={0,0,0,0,0,0,0,0,0};
void find_all(unsigned long int crnt_number){
	unsigned long int temp_num=crnt_number;
	int rem=-1,digit_to_find;
	int count=0;	
	int i;
	for(i=1;i<=9;i++){
		digit_to_find=i;
		count=0;
		rem=-1;
		temp_num=crnt_number;
		while(temp_num>0){		
			if(rem==digit_to_find) {
				count++;
			}
			if(temp_num==digit_to_find){
				count++;
			}
			rem=temp_num%10;
			temp_num=temp_num/10;
		}
		occurrence[i-1]=count+occurrence[i-1];
	}	
}
void print_occurrence() {
	int i;
	for(i=0;i<9;i++){
		printf("\n\t %d occurrence # %d",(i+1),occurrence[i]);
	}
}

int find_digit_occurrences(unsigned long int range_start,unsigned long int range_end,int digit_to_find){
	unsigned long int occured_count,i;
	for( i=range_start;i<=range_end;i++){
		find_all(i);
	}
	printf("\n Occurrence Details ___________");
	print_occurrence();	
	return occured_count;
	
}


void main(){
	unsigned long int range_start, range_end,i;
	int digit_to_find;
	int occured_count=0;
	
	printf("\n\tStart of Range : ");
	scanf("%d",&range_start);
	printf("\n\tEnd of Rage : ");
	scanf("%d",&range_end);	
	find_digit_occurrences(range_start,range_end,0);
	
	
}

