/*write a program to print all input lines that are longer than 80 characters*/

#include<stdio.h>
#define max 1000
int i=0;
char write(char line[]); 
int main()
{
	int len=0;
	char line[max];
		while((len=write(line))>0)
		{
			if(len<80)
			{
				printf("lessthan 80 characters\n");
				printf("%s\n",line);
		        }
			else
			{
	 		        printf("morethan 80 characters\n");
				printf("%s\n",line);	
			}
		}
             
}		
char write(char s[])
{
	int c;
	while((c=getchar())!=EOF&& c!='\n'&&c!=' ')
	{
		s[i]=c;
	        ++i;
	}
		if(c=='\n'||c==' ')
		{
			s[i]=c;
			++i;
		}
		s[i]='\0';
		return i;
}

