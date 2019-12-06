#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter two values:");
	scanf("%d%d",&a,&b);
	printf("\n Before swap a=%d \t b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n After swaping a=%d \t b=%d",a,b);
}
