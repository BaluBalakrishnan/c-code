/*convert upper case into lower case*/

#include<stdio.h>
int main()
{
	int c,x;
	while((c=getchar())!=EOF)
	{
		x=(c>='A'&&c<='Z')?(c+32):(c-32);
		printf("%c",x);
	}
}
