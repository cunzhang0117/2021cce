/*�s��Ū�J10�Ӿ��(1 �V 1000)�A��X��Ū�J����Ʀ��X�ӬO3�����ơC
��ƽd��G1 �V 1000*/

#include <stdio.h>
int main()
{
	int a[10], sum=0;

	for(int i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%3==0)
			sum++;
	}

	printf("%d\n", sum);
}
