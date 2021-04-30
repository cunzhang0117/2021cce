```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100];
char tree[100000][32];
int cmp(const void *p1, const void *p2)
{
	return strcmp((char*) p1, (char*) p2);
}
int main()
{
	int n;
	scanf("%d\n\n", &n);
	
	for(int i=0; i<n; i++)
	{
		int t=0;
		while(gets(line)!=NULL)		//讀取失敗
		{
			if(strcmp(line, "")==0) break;	//讀到空行
			strcpy(tree[t], line);		//將line讀入的資料複製到tree
			t++;	//統計樹有幾棵
		}
		
		qsort(tree, t, 32, cmp);
		int ans=1;
		for(int i=0; i<t; i++)
		{
			if(strcmp(tree[i], tree[i+1])==0) ans++;
			else
			{
				printf("%s %.4f\n", tree[i], 100*ans/(float)t);
				ans=1;
			}
		}
		if(i<n-1) printf("\n");
	}
}
```
