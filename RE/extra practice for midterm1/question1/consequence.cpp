#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a,b=0,c;
	for(c=0;c<=10;c++){
		a=c+2<5? b++:c,b--;
		printf("a=%d,b=%d,c=%d\n",a,b,c);
	}
	printf("%d\n",a+++b);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	return 0;
}
