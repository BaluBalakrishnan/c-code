/*This program is find the fahrenheit and celsius..*/

#include<stdio.h>
int main()
{
	int fahr,celsius,lower=0,upper=300,step=20;
	fahr=lower;
	printf("fahrenheit\tcelsius\n");
	while(fahr<=upper)
	{
		celsius=(fahr-32)*5/9;
		printf("%3d\t\t%3d\n",fahr,celsius);
		fahr=fahr+step;
	}
}
