/*��J�@�Ӿ�ơA�p�G�ҿ�J����Ƥj��ε���90�A�h��XA�F�p�G��J����Ƥp��90���j��ε���80�h��XB�A�p�G�p��80���j��ε���60�A�h��XC�F�p����L��ơA�h��XF�C*/

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=90) printf("A\n");
	else if(n<90 && n>=80) printf("B\n");
	else if(n<80 && n>=60) printf("C\n");
	else printf("F\n");
}
