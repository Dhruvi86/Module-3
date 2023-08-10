#include<stdio.h>
main(){
	int inputs[10];
	int i;
	printf("Enter 10 numbers: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&inputs[i]);
	}
	printf("\n number divisable by 2:\n");
	for(i=0;i<10;i++)
	{
		if(inputs[i]%2==0){
			printf("%d",inputs[i]);
		}
	}
	printf("\n number divisable by 5:\n");
	for(i=0;i<10;i++)
	{
		if(inputs[i]%5==0){
			printf("%d",inputs[i]);
		}
	}
	printf("\n number divisable by 10:\n");
	for(i=0;i<10;i++)
	{
		if(inputs[i]%10==0){
			printf("%d",inputs[i]);
		}
	}
	printf("\n");
}

