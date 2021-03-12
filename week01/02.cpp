/*輸入一個正整數，顯示所有該正整數因數的個數。
數字範圍：整數1 – 10000。 */

#include <stdio.h>
int main()
{
	int n, sum=0;
	scanf("%d", &n);

	for(int i=1; i<=n ;i++)
	{
		if(n%i==0)
			sum++;
	}
	printf("%d\n", sum);
}
