/*this program is return the rightmost occurrence*/

#include<stdio.h>
int fun(char s[],char t[]);
int main()
{
 char str[]="hello hai";
 char str1[]="hai";
 int num;
 num=fun(str,str1);
 printf("%d\n",num);
 if(num==1)
	 printf("%s",str);
 else
	 printf("no");
}
int fun(char s[],char s1[])
{
	int i,j,k;
	for(i=0;s[i]!='\0';i++) 
	{
		for(j=i,k=0;s1[k]!='\0'&&s[j]==s1[k];j++,k++)
			;
	if(k>0&&s1[k]=='\0')
		return 1;
	}
	return -1;
}


