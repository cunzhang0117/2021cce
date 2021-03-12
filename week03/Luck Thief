```C
#include <stdio.h>
int C(int n, int m)
{
    int ans=0;
    for(int i=m-1; i>=m-n; i--)
    {
        ans = ans+i;
    }
    return ans;
    //if((m-1)<=n) return m-1;
    //return C((m-1), n)+n;
}
int main()
{
    int T, n, m;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        scanf("%d%d", &n, &m);
        printf("%d\n", C(n, m));
    }
}
```
