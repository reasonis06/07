#include <stdio.h>
#include <stdlib.h>

static int all_files; // global variable

extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);
	
	system("PAUSE");
	return 0;
}
