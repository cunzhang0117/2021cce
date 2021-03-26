### 01｜字母陣列
```c
#include <stdio.h>
int main()
{
    char line[100] = "decline";
    char line2[100] = {'p', 'r', 'o', 'p', 'e', 'r', '\0'};

    printf("%s\n", line);
    printf("%s\n", line2);
}
```

### 02｜另外一種字串宣告的方法
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    printf("%s\n", line);
    char line2[10]={'p', 'r', 'o', 'p', 'e', 'r', '\0'};
    printf("%s\n", line2);

    char line3[]="majority";
    printf("%s\n", line3);
    char line4[]={'m', 'a', 'j', 'o', 'r', 'i', 't', 'y'};
    printf("若忘記加\\0在結尾: ==%s==\n", line4);
}
```

### 03｜
```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline", "proper", "majority", "bullet", "shop"};
    for(int i=0; i<=4; i++)
    {
        printf("%s\n", line[i]);
    }
}
```

### 04｜'\0'的值
```C
#include <stdio.h>
int main()
{
    printf("'\\0'的值是: %d", '\0');
}
```

### 05｜比大小
```C
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="want";
    char line2[10]="goHome";

    if(strcmp(line, line2)>0) printf("左邊大");
    else printf("右邊大");
}
```

### 06｜單字排列
```C
#include <stdio.h>
#include <string.h>
char voc[100][10];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++)
	{
		scanf("%s", &voc[i]);
	}
	char temp[10];
	
	for(int i=0; i<N; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(strcmp(voc[i], voc[j])>0)
			{
				strcpy(temp, voc[i]);
				strcpy(voc[i], voc[j]);
				strcpy(voc[j], temp);
			}
		}
	}
	
	for(int i=0; i<N; i++)
	{
		printf("%s\n", voc[i]);
	}
}
```
