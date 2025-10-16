#include <stdio.h>
#include <stdlib.h>

int inc(int counter); // funtion declare

int main(void)
{
	int i=10;
	printf("before function call: i=%d\n", i);
	i = inc(i);
	printf("after function call: i=%d\n", i);
	
	system("PAUSE");
	return 0;
}
	
int inc(int counter) // funtion definiton
{
	counter++;
	return counter;
}

/*
int inc(int counter); // funtion declare

int main(void)
{
	int i=10;
	printf("before function call: i=%d\n", i);
	inc(i);
	printf("after function call: i=%d\n", i);
	
	system("PAUSE");
	return 0;
}
	
int inc(int counter)
{
	counter++;
	return counter;
}
*/
