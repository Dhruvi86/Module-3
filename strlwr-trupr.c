#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	printf("Enter your string here");
	gets(str1);
	gets(str2);
	printf("%s",str1);
	printf("This is your revers string %s\n",strlwr(str1));	
	printf("%s",str2);
	printf("This is your revers string %s\n",strupr(str2));
}

