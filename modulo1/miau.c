#include <stdio.h>

void miau(void);

int main(void)
{
     for(int i = 0; i < 3; i++)
     {
          miau();
	 }
}

void miau(void)
{
      printf("miau.\n");
}