#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n=0x0;

	for(;n<0xf;n++)
  {
   putchar(n + '0x0'); 
  }
  putchar('\n');
	return (0);
}
