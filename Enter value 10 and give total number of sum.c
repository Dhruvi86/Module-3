#include<stdio.h>
main(){
	int i,a,total=0;
	for(i=1;i<=10;i++){
      	printf("enter %d: ",i);
		scanf("%d",&a);
		total+=a;
	}
	printf("total sum of 10 number = %d\n",total);
}
