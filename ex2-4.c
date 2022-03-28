/*delete each character in s1 that any in position for the next pass through loop*/
#include<stdio.h>
#define MAX 100

void squeeze(char s1[],char s2[])
{
	int i,j,k=0;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;(s1[i]!=s2[j]) && s2[j]!='\0';j++)
			;
		if(s2[j]=='\0')
			s1[k++]=s1[i];
	}
	s1[k]='\0';
	for(j=0;s1[j]!='\0';j++)
		printf("%c",s1[j]);
}
int main()
{
	int c,i=0,j=0;
	char d;
	char s1[MAX];
	char s2[MAX];
	printf("enter the character s1");
	while((c=getchar())!='\n' && i<MAX)
	{
		s1[i]=c;
		i++;
	}
	s1[i]='\0';
	printf("enter the character s2");
	while((d=getchar())!=EOF && i<MAX)
	{
		s2[j]=d;
		j++;
	}
	s2[j]='\0';
	squeeze(s1,s2);
	return 0;
}
