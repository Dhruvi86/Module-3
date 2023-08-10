#include<stdio.h>
#include<string.h>
main()
{
	char str1[20];
	printf("Enter your string here");
	gets(str1);
	printf("%s",str1);
	printf("This is your revers string %s",strrev(str1));	
}

