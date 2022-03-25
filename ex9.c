/*this program is replacing each string of one or more blank by single blank*/
#include<stdio.h>
int main(void)
{
  int c,lastc='-';
  while((c = getchar()) != EOF)
  {
    if(c == ' ')
    {
      if(lastc != ' ')
        putchar(c);
    }
    else
      putchar(c);
    lastc=c;
  }
  return 0;
}

