### 01｜考試
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++)
	{
		int ans[256]={};    //={}會將ans[]清零
		for(int i=0; line[i]!=0; i++)
		{
			char c=line[i];
			ans[c]++;
		}
		
		if(t>0) printf("\n");
		for(int i=0; i<256; i++)
		{
			if(ans[i]>0) printf("%d %d\n", i, ans[i]);
		}
	}
}
```

### 02｜Tell me the frequencies! 
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++)
	{
		int ans[256]={};	//次數
		char  c[256]={};	//ASCII
		for(int i=0; i<256; i++) c[i]=i;
		
		for(int i=0; line[i]!=0; i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int i=0; i<256; i++)
		{
			for(int j=i+1; j<256; j++)
			{
				if(ans[i]>ans[j])
				{
					int temp = ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
				
				if(ans[i]==ans[j]&&c[i]<c[j])	//當右側相同，且左側前數小於後數
				{
					int temp = ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0; i<256; i++)
		{
			if(ans[i]>0) printf("%d %d\n", c[i], ans[i]);
		}
	}
}

```

### 03｜Train Swapping
```C
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		int t;
		scanf("%d", &t);
		for(int j=0; j<t; j++)
		{
			scanf("%d", &a[j]);
		}
		int ans=0;
		
		for(int k=0; k<t-1; k++)	//泡泡排序法
		{
			for(int j=0; j<t-1; j++)
			{
				if(a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```

### 04｜Sort! Sort!! and Sort!!! 
```C
#include <stdio.h>
int a[1000];
int main()
{
	int N, M;
	while(scanf("%d %d", &N, &M)==2)
	{
		for(int i=0; i<N; i++)
		{
			scanf("%d", &a[i]);
		}
		
		printf("%d %d\n", N, M);
		for(int i=0; i<N; i++)
		{
			printf("%d\n", a[i]);
		}
	}
}
```
