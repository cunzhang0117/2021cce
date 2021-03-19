```C
#include <stdio.h>
void C(int s, int d)
{
    int x, y, temp=0;
    y=((s-d)/2);
    if(y<=0) printf("impossible");
    else{
        x=s-y;
        if(x<y){
            temp=x;
            x=y;
            y=temp;
        }
        printf("%d %d\n", x, y);
    }
}
int main()
{
    int n, s, d;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d", &s, &d);
        C(s, d);
    }
}
```
