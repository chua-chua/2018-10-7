//(a+b)%m=(a%m+b%m)%m 
//(a*b)%m=(a%m*b%m)%m
#include<stdio.h>
int Factorial_mod(int m,int n)
{
	int i;
	int multiplier;			//分解的乘数
	int product = 1;		//公式右括号的乘积
	for( i=1;i<=m;i++ )
	{
		multiplier = i % n;
		if( i%n==0 )		//是否整除
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