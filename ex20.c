/*This program is copying one string to another array and also word counting*/

#include<stdio.h>
#define maxline 1000
int read(char[],int);
void copy(char to[],char from[]);
int main()
{
	int len;
	int m;
	char line[maxline];
	char longest[maxline];

	m=0;
	while((len=read(line,maxline))>0)
		if(len>m)
		{
			m=len;
	            copy(longest,line);
                }
       if(m>0)
	printf("\n%s",longest);
	return 0;
	}
int read(char s[],int x)
{

	int c,i;
	for(i=0;i<x-1&&(c=getchar())!=EOF&&c!='\n';++i)
	{
		s[i]=c;
	}
	if(c=='\n')
	{
		s[i]=c;
		++i;
		printf("%d\n",i);
	}
	s[i]='\0';
	return i;
}
void copy(char to[],char from[])
{
	int i=0;
	while((to[i]=from[i])!='\0')
		++i;
}

