#include<stdio.h>
#include<string.h>
main()
{
	char name[20]={'a','b','c','d','e','f','g','h'};
	char name2[20];
	strcpy(name2,name);
	printf("%s",name2);
}
