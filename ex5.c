/*This program is find the fahrenheit to celsius & using conversion specification(printf("%1.4f"))=1.3214*/
#include<stdio.h>
int main()
{
	float fahr,celsius;
	int lower=0,upper=300,step=20;
	fahr=lower;
	printf("celsius\tfahrenheit\n");
	while(fahr<=upper)
	{
		celsius=(5.0/9.0)*(fahr-32);
		printf("%.2f\t%3f\n",celsius,fahr);
		fahr=fahr+step;
	}
}
