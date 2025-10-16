#include <stdio.h>
#include <stdlib.h>

void f(void); // global function declare

int main(void)
{
	int i; // local variable
	for(i=0; i<5; i++)
	{
		f();
	}
	
	system("PAUSE");
	return 0;
}

void f(void) // funtion definiton
{
	int i; // local variable
	for(i=0; i<10; i++)
	{
		printf("#");
	}
}

/*
void f(void); // global function declare

int i; // global variable

int main(void)
{
	for(i=0; i<5; i++)
	{
		f();
	}
	
	system("PAUSE");
	return 0;
}

void f(void) // funtion definiton
{
	for(i=0; i<10; i++)
	{
		printf("#");
	}
}
*/
