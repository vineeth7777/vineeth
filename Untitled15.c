#include<stdio.h>
main()
{
	int n;
	printf("\n enter value:");
	scanf("%d",&n);
	printf(n>0 ? " +ve " : n<0 ? "-ve":"Zero");
}
