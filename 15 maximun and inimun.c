#include<stdio.h>
main(){
	int i,a,maxi=0,mini=0;
	
		printf("Enter your value %d: ",i);
		scanf("%d",&a);
		maxi=a;
		mini=a;
		for(i=1;i<=5;i++){
			printf("Enter your value %d :",i);
			scanf("%d",&a);
			if(a>maxi){
				maxi=a;
			}if(a<mini){
				mini=a;
			}
	}
	printf("this is your maximum  is %d\n",maxi);
	printf("this is your minimum  is %d\n",mini);
}
