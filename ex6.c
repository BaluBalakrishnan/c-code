/*This program is temperature conversion to print table in reverse order*/
#include<stdio.h>
#define lower 0
#define upper 300
#define step 20
int main()
{
	int fahr;
	printf("celsius\tfahernheit\n");
	for(fahr=upper;fahr>=lower;fahr=fahr-step)
	{
	printf("%3d\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
	}
}


