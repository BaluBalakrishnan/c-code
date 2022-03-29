/*This program is bitwise operator sample code*/
/*presedence and associativity learning*/

#include<stdio.h>

int fun(int x,int p,int n);

int main(void)
{
    printf("%d",fun( 8,3,3));
}

int fun(int x, int p, int n)
{
    return   x ^ (~(~0 << n) << (p + 1 - n));
}


