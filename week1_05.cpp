/*��J���������l�Τ���(�������i��0)�A�N���²�᪺������X�C
�Ʀr�d��G���1 �V 10000*/

#include <stdio.h>
int main()
{
	int c, m, num;
	scanf("%d%d", &c, &m);

	for(int i=1; i<=c; i++)
	{
		if(c%i==0 && m%i==0)
			num=i;
	}

	printf("%d %d\n", c/num, m/num);
}
