#include<stdio.h>
int Sort(int *arr,int n)	//��С��������
{
	int i,j;
	int temp;
	for( i=0;i<n;i++ )
	{
		for( j=i;j<n;j++ )
		{
			if( arr[i]>arr[j] )
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 0;
}
int PrintArray(int *arr,int n)	//�����������
{
	int i;
	for( i=0;i<n;i++ )
		printf("%d	",arr[i]);
	printf("\n\n");
	return 0;
}
int main()
{
	int a[] = {2018,10,7,16,38};
	printf("����ǰ:");
	PrintArray(a,5);
	Sort(a,5);
	printf("�����:");
	PrintArray(a,5);
	return 0;
}