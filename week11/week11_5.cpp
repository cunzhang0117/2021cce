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

