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
  }
  for (;cap <= 'Z';cap++)
    {
      putchar(cap);
    }
  putchar('\n');
	return (0);
}
