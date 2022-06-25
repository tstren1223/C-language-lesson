#include <stdio.h>
#include <conio.h>
int main(){
	int i=24,j=16;
	int k,k1,l,ll,m,n,p,q;
	
	//clrscr(); devc++¤£§t 
	k=i&j;
	k1=i&&j;
	l=i|j;
	ll=i||j;
	m=~i;
	n=i^j;
	p=i>>2;
	q=j<<2;
	
	printf("%d bitand %d = %d\n",i,j,k);
	printf("%d bitor %d = %d\n",i,j,l);
	printf("%d and %d = %d\n",i,j,k1);
	printf("%d or %d = %d\n",i,j,ll);
	printf("not %d = %d\n",i,m);//2¸É¼Æ 
	printf("%d xor %d = %d\n",i,j,n);
	printf("%d right-shift 2 bits = %d\n",i,p);
	printf("%d left-shift 2 bits = %d\n",j,q);
	getch();
	
	int a=3,b=5;
	
	printf("%d\n%d\n%d\n%d\n%d\n",a<<b,a>>b,a&b,a|b,a^b);
	
	return 0;
}
