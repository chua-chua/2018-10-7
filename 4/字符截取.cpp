//ʵ��SubString����������һ�ַ����������Ӵ�
//����������Ϊ�Ӵ���ԭ�ַ�������ʼλ�������Ϊֹ��
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