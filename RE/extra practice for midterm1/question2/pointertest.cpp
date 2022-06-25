#include<stdio.h>
int main(){
	int *p,*x,y(8);//int設初值可用()!!! 
	p=NULL;//p的值放指向地址,&p放p指標的地址,*p放指向地址的值 
	printf("%u\n%u\n",&p,p);//指向NULL則供給0值給地址,另NULL值不被定義!
	//p=x will make some problem--->becuase x later points to y!!
	x=&y;
	p=&y;//亦可p=x; 
	//y=2;
	//*p=4;
	printf("%d\n%d\n%d\n",*p,*x,y);
	printf("%u\n%u\n",&p,&x);
	printf("%d\n%d\n%d\n",*(x-1),&x,*(x+2));//(x+1)表p則*(x+1)表p的值 ==>地址的+1-1括弧呈現的是變數的連續性 
	
	printf("%d\n%d\n%d\n",*(&x-1),x,(x+1));//x表y的地址,所以x+1為x指標的地址!!! 
	return 0;
}
