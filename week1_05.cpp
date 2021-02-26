/*輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。
數字範圍：整數1 – 10000*/

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
