### 01｜qsort練習
```C
#include <stdio.h>
#include <stdlib.h>     //qsort
int a[10] = {4, 8, 3, 7, 5, 2 ,9, 1, 6, 10};
int compare(const void *p1, const void *p2)
{
    /*
    int *s1 = (int*) p1;
    int *s2 = (int*) p2;
    int d1 = *s1;
    int d2 = *s2;
    */
    int d1 = * (int*) p1;
    int d2 = * (int*) p2;
    if(d1 > d2) return 1;
    if(d1 == d2) return 0;
    if(d1 < d2) return -1;
}
int main()
{
    qsort(a, 10, sizeof(int), compare);
    for(int i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
}
```

### 02｜考試題練習
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
char others[100];
int compare(const void *p1, const void *p2)
{
	char *s1 = (char*) p1;
	char *s2 = (char*) p2;
	
	int result = strcmp(s1, s2);
	if(result>0) return 1;
	if(result==0) return 0;
	if(result<0) return -1;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%s\n", line[i]);
		gets(others);	//空格之後的資料讀入others中（用不到） 
	}
	
	qsort(line, n, 80, compare);
	int ans=1; 
	
	for(int i=0; i<n; i++)
	{
		if(strcmp(line[i], line[i+1])==0)	ans++;
		else{
			printf("%s %d\n", line[i], ans);
			ans=1;
		}
	}
}
```
