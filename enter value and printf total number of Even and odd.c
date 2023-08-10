#include<stdio.h>
main(){
	int j=0,k=0,i,arr[10],even[10],odd[10],evencounter=0,oddcounter=0;
	for(i=0;i<=10;i++)
	{
		printf("Enter you value :");
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			evencounter++;
			j++;
		}else{
			odd[k]=arr[i];
			oddcounter++;
			k++;
		}
	}
	printf("This is even number :");
	for(j=0;j<=evencounter;j++)
	{
		printf("%d \t",even[j]);
	}
	printf("\n This is odd number :");
		for(k=0;k<=evencounter;k++)
	{
		printf("%d \t",odd[k]);
	}
}


