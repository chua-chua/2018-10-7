//(a+b)%m=(a%m+b%m)%m 
//(a*b)%m=(a%m*b%m)%m
#include<stdio.h>
int Factorial_mod(int m,int n)
{
	int i;
	int multiplier;			//�ֽ�ĳ���
	int product = 1;		//��ʽ�����ŵĳ˻�
	for( i=1;i<=m;i++ )
	{
		multiplier = i % n;
		if( i%n==0 )		//�Ƿ�����
			return 0;
		product *= multiplier;
	}
	int answer = product % n;
	return answer;
}
int main()
{
	printf("%d \n",Factorial_mod(1008,25));
	return 0;
}