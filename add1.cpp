#include<stdio.h>
int main()
{
	int a = 10, b = 20;

	sum = add(&a, &b); // call by address
	

}
int add(int *p, int *q)
{
	return *p+*q;

}
