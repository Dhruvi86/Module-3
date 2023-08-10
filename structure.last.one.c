/*
struct name{
mem funint
float
char
double
}s1;

struct name s1={};

*/
#include<stdio.h>
struct demo{
	int age;
	char name[20];
	float sal;

	double number;
}s1;
main(){
	struct demo s2=
	{
		24,"Meet",25000,9265959083,
	};
    s1.age=23,
    strcpy(s1.name,"Ronak");
    s1.number=9265959083;
    s1.sal=25000;
    printf("%d\n",s1.age);
    printf("%s\n",s1.name);
    printf("%lf\n",s1.number);
    printf("%f\n\n\n",s1.sal);
    printf("%d\n",s2.age);
    printf("%s\n",s2.name);
    printf("%lf\n",s2.number);
    printf("%f\n",s2.sal);
}
