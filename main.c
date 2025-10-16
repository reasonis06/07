#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  
  for(i=0; i<5; i++)
  {
		int temp =1; // lifetime start
		printf("temp = %d\n", temp);
		temp++; // litetime end
	}
  
  system("PAUSE");	
  return 0;
}
