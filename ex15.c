#include<stdio.h>
int celsius(int a);//fahrenheit to celsius..
int fahrenheit(int b);//celsius to fahrenheit..
int main()
{
	int n,c,f,v;
	printf("choose 'C' for celsus\nchoose 'F' for fahrenheit\n");
	while((n=getchar())!=EOF)
	{
		if(n=='c')
		{
			printf("enter the fahrenheit value");
                        scanf("%d",&v);
			c=celsius(v);
			printf("celsius=%d",c);
		}
	if(n=='f')
	{
		printf("enter the celsius");
		scanf("%d",&v);
		f=fahrenheit(v);
		printf("fahrenheit%d",f);
	}
}
}
int celsius(int a)
{
	int x;
	x=(a-32)*5/9;
	return x;
}
int fahrenheit(int b)
{
	int y;
	y=(b*9/5)+32;
	return y;
}


