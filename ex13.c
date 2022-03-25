/*this program is print the histogram of words*/
#include<stdio.h>
int main()
{
	int c,k=0;

	while((c=getchar())!=EOF)
	{
	 	if(c==' '||c=='\n'||c=='\t')
		{
		        ++k;
			printf("\n");
		}
		else
			printf("*");
		
	}

	printf("\nothers%d",k);
	return 0;
}
