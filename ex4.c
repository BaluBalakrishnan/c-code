/*This program is find the celsius to fahrenheit*/

#include<stdio.h>
int main()
{
	int celsius,lower=0,upper=300,step=20,fahr;
	printf("celsius\tfahrenheit\n");
        celsius=lower;
	while(celsius<=upper)
	{
		fahr=celsius*(9/5)+32;
		printf("%3d\t%3d\n",celsius,fahr);
		celsius=celsius+step;
	}
}
