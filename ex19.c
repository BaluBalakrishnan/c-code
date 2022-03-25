/*this program is string reverse*/
#include<stdio.h>
#define max 1000
int swrite(char line[],int l);
int main()
{
	int i=0,j,k=0;
	char line[max];
	char r[max];
	int l;
	while((i=swrite(line,max))>0)
	{
	     for(j=0;j<i;j++)
	   {
		   r[j]=line[i];
	   }
	}

	printf("%s\n",r);
	return 0;
}
int swrite(char line[],int m)
{
	int c,x;
	for(x=0;x<m-1 && (c=getchar())!=EOF && c!='\n';++x)
		line[x]=c;
	if(c=='\n')
	{
		line[x]=c;
		++x;
	}
	line[x]='\0';
	printf("%d\n",x);
	return x;
}

