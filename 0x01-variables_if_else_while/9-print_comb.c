#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for(n=0;n<10;n++)
  {
   putchar(n + '0'); 
    putchar(',');
    putchar(' ');
  }
  putchar('\n');
	return (0);
}
