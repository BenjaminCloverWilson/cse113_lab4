#include<stdio.h>


int main() 
{
	int *p;
	int a, b;
	a = 0;
	b = 1;
	
	//Correction Benjamin Wilson 09/25/21
	//p = a;
	p = &a;
	printf("%d\n", *p); 

	//Correction Benjamin Wilson 09/25/21
	//b = &p;
	p = &b;
	
	//Correction Benjamin Wilson 09/25/21
	//printf("%d\n", b);
	printf("%d\n", *p);

 	return 0;
}
