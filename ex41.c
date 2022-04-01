/*swaping using macros*/

#include<stdio.h>

#define swap(t,x,y) { t _z; \
             _z = x;\
              x = y;\
              y = _z; }

int main(void)
{
    char x,y;
    x=rand();
    y=rand();
    
    printf("x= %d \t y= %d\n",x,y);
    /* swap function */
    swap(int,x,y);
    printf("x=%d \t y=%d\n",x,y);
}

