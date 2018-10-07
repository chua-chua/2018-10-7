//计算出VR工作室群号的最大质因数
#include<stdio.h>
int Maximum_prime_factor(int n)	//求最大质因数
{
	int factor = 2;
	if( n==1 )
		return 1;
	while( n>factor )
	{
		if( n%factor==0 )
			n /= factor;
		else
			factor ++;
	}
	return factor;
}
int main()
{
	printf("%d \n",Maximum_prime_factor(865751897));
	return 0;
}