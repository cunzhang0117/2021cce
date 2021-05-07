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

### 03｜struct 結構
```C
#include <stdio.h>
struct data
{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d", box.c, box.ans);
}
```

### 04｜typedef 
```C
#include <stdio.h>
typedef struct data
{
    int ans;
    char c;
}DATA;
//struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d", box.c, box.ans);
}
```

### 05｜UVA 10062
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++)
	{
		if(t>0) printf("\n");
		printf("abc\n");
		printf("abc\n");
		printf("abc\n");
	}
}
```

### 06｜
```C
#include <stdlib.h>
char line[2000];
typedef struct data
{
	int ans;
	char c;
}DATA;
DATA box[256];
int compare(const void *p1, const void *p2)
{
	DATA b1 = *(DATA*) p1;
	DATA b2 = *(DATA*) p2;
	if(b1.ans > b2.ans) return 1;
	if(b1.ans == b2.ans)
	{
		if(b1.c>b2.c) return -1;
		if(b1.c==b2.c) return 0;
		if(b1.c<b2.c) return 1;
	}
	if(b1.ans < b2.ans) return -1;
}
int main()
{
	for(int t=0; gets(line); t++)
	{
	
		for(int i=0; i<256; i++)
		{
			box[i].ans=0;
			box[i].c=i;	
		}

	
		for(int i=0; line[i]!=0; i++)
		{
			char c = line[i];
			box[c].ans++;	//統計到ans[]內
		}
		
		qsort(box, 256, sizeof(DATA), compare);
		
		if(t>0) printf("\n");
		for(int i=0; i<256; i++)
		{
			if(box[i].ans>0) printf("%d %d\n",box[i].c, box[i].ans);
		}
	}
}
```
