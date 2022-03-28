#include<stdio.h>
#include<ctype.h>
int atof (char s[])
{
	double val,power;
	int i,sign;
	for(i=0;isspace(s[i]);i++)
	;	
	sign=(s[i]=='-')?-1:1;
	if(s[i]=='+'||s[i]=='-')
           i++;
	for(val=0.0;isdigit(s[i]);i++)
		val=10.0*val+(s[i]-'0');
	if(s[i]=='.')
		i++;
	for(power=1.0;isdigit(s[i]);i++)
	{
		val=10.0*val+(s[i]-'0');
		power*=10.0;
	}
	 sign= sign*val/power;
	printf("%d",sign);
}
int main()
{
	char t[]="hello	world";
	atof(t);
}
