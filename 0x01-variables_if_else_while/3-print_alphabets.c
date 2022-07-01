#include <stdio.h>

/**
*this is main entry
*
* betty style doc for function main goes there
*/
int main(void)
{
	char smal, cap='A';
  for (smal = 'a'; smal <= 'z'; smal++)
  {
    putchar(smal);
    putchar(cap);
    putchar('\n');
    cap++;
  }

	return (0);
}
