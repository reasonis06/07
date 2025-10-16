#include <stdio.h>
#include <stdlib.h>

void sub(void); // function declare

int main(void)
{
	int i; // local variable
	
	for(i=0; i<3; i++)
		sub();
	
	system("PAUSE");
	return 0;
}

void sub(void) // funtion definiton
{
	int auto_count=0; // automatic allocation
	static int static_count=0; // static allocation
	
	auto_count++;
	static_count++;
	
	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
}

