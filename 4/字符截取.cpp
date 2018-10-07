//实现SubString方法，给定一字符串，返回子串
//（给定参数为子串在原字符串的起始位置与结束为止）
#include<stdio.h>
char string[100] = {'\0'};
char* SubString(char *s,int begin,int end)
{
	
	int i,j=0;
	for( i=begin;i<=end;i++ )
	{
		string[j++] = s[i];
	}
	return string;
}
int main()
{
	char str[] = "guoqing";
	printf("%s \n",SubString(str,3,7));
	return 0;
}