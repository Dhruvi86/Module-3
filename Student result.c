/* sr name sub1 sub2 sub3 total per% */
#include<stdio.h>
struct demo{
	int sr;
	char name[20];
	double a,b,c;
	float d,e;
}s1;
main(){
	struct demo s2={
	};
	s1.sr=1;
	strcpy(s1.name,"arjun");
	s1.a=78;
	s1.b=86;
	s1.c=82;
	printf("%d\t",s1.sr);
	printf("%s\t",s1.name);
	printf("%lf\t",s1.a);
	printf("%lf\t",s1.b);
	printf("%lf\t",s1.c);
	printf("%f\t",s1.d=s1.a+s1.b+s1.c);
	printf("%f\t",s1.e=s1.d*100/300);
}


