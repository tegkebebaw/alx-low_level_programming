#include <stdio.h>
/**
 *main entry
 *
 * betty style doc for function main goes there 
*/
int main(void)
{
	char alpha;
  for(alpha = 'a'; alpha <= 'z'; alpha++)
  {
    if(alpha == 'e' || alpha == 'e')
    {
      continue;
    }
    else
    {
      putchar(alpha);
    }
  }
 return (0);
}
