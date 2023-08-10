/*
concetinet
add second line o first line
*/
#include<stdio.h>
#include<string.h>
main()
{
	char name[20]={'a','b','c','d','e','f','g','h'};
	char xyz[20]={'H','E','L','L','O'};
	strcat(name,xyz);
	printf("%s",name);
}
