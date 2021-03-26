#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="want";
    char line2[10]="goHome";

    if(strcmp(line, line2)>0) printf("左邊大");
    else printf("右邊大");
}
