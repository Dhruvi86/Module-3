#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	printf("Enter your string here");
	gets(str1);
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Equal");
	}else{
		printf("Not Equal");
	}
}
