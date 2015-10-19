/*
 gcc -o thread2 thread_2.c -lpthread 
 */

#include<pthread.h>
#include<stdio.h>

struct char_parms
{
	char ch;
	int count;
};    
void* char_print(void* param)
{
	struct char_parms* p=(struct char_parms*)param;
	printf("%c",p->ch);
	printf("%d",p->count);
	int i;
	for(i=0;i<p->count;++i)
	{
		fputc(p->ch,stderr);
	}
	return NULL;
}

int main(){
	pthread_t thread1_id;
	pthread_t thread2_id;
	struct char_parms td1_args;
	struct char_parms td2_args;
	
	td1_args.ch='0';
	td1_args.count=20;
	pthread_create(&thread1_id,NULL,&char_print,&td1_args);
	
	td2_args.ch='1';
	td2_args.count=20;
	pthread_create(&thread2_id,NULL,&char_print,&td2_args);
	return 0;
}
	
 
