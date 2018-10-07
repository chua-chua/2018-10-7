//给定一个字符串，要求统计出字符串里面的
//数字个数，字母个数，空格个数，以及其他字符的个数
#include<stdio.h>

int Count(char* s)	//字符统计
{
	int number	= 0;
	int letter	= 0;
	int space	= 0;
	int other	= 0;
	int total	= 0;
	int i;
	for( i=0;s[i]!='\0';i++ )	//统计
	{
		if( s[i]>='0' && s[i]<='9' )
			number ++;
		else if(	(s[i]>='a' && s[i]<='z')
			||		(s[i]>='A' && s[i]<='Z')	)
			letter ++;
		else if( s[i]==' ' )
			space ++;
		else
			other ++;
		total ++;
	}
								//输出结果
	printf("字符总共:	%d \n",total );
	printf("数字个数:	%d \n",number);
	printf("字母个数:	%d \n",letter);
	printf("空格个数:	%d \n",space );
	printf("其他个数:	%d \n",other );
	return 0;
}

int main()
{
	Count("汉字占2个字节,But this sentence does not contain Chinese punctuation");
	return 0;
}