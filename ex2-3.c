/*this program is convert the hexa into integer*/
#include<stdio.h>
#include<stdlib.h>
int htoi(char c)
{
	if(c>='a' && c<='f')
	{
		c=(c-55);
	}

		printf("%d",c);

	return c;
}

int main()
{
	int i,d,c;
	
	while((c=getchar())!=EOF)
		if(c>='A' && c<='F')
		{
			c=(c-55);
			printf("%d",c);
		}
		else
			printf("%c",c);

	return 0;
}

