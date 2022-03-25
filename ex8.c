/*tabs,blanks,newLine couning program*/

#include<stdio.h>
int main()
{
	int n=0,a=0,b=0,c=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
		++a;
		}
		if(c=='\t')
		{
	        ++b;
		}
		if(c==' ')
		{
	        ++n;
		}
	}
	printf("new line=%d\n",a);
	printf("tab=%d\n",b);
	printf("space=%d\n",n);
}


