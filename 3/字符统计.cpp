//����һ���ַ�����Ҫ��ͳ�Ƴ��ַ��������
//���ָ�������ĸ�������ո�������Լ������ַ��ĸ���
#include<stdio.h>

int Count(char* s)	//�ַ�ͳ��
{
	int number	= 0;
	int letter	= 0;
	int space	= 0;
	int other	= 0;
	int total	= 0;
	int i;
	for( i=0;s[i]!='\0';i++ )	//ͳ��
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
								//������
	printf("�ַ��ܹ�:	%d \n",total );
	printf("���ָ���:	%d \n",number);
	printf("��ĸ����:	%d \n",letter);
	printf("�ո����:	%d \n",space );
	printf("��������:	%d \n",other );
	return 0;
}

int main()
{
	Count("����ռ2���ֽ�,But this sentence does not contain Chinese punctuation");
	return 0;
}