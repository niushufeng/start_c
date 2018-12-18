#include "stdio.h"
int f(char *p)
{
	int i,n=-1;
	for (i = 0; *(p+i) !='\0'; i++) {
		if(*(p+i)=='*')
		n = i;
		break;
	}
	return n;
}
int main(int argc, char const *argv[]) {

	char p[200];
	gets(p);
	printf("%d\n",f(p));
	return 0;
}
