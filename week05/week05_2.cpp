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
    printf("�Y�ѰO�[\\0�b����: ==%s==\n", line4);
}
