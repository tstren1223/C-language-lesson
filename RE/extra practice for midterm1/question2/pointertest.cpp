#include<stdio.h>
int main(){
	int *p,*x,y(8);//int�]��ȥi��()!!! 
	p=NULL;//p���ȩ���V�a�},&p��p���Ъ��a�},*p����V�a�}���� 
	printf("%u\n%u\n",&p,p);//���VNULL�h�ѵ�0�ȵ��a�},�tNULL�Ȥ��Q�w�q!
	//p=x will make some problem--->becuase x later points to y!!
	x=&y;
	p=&y;//��ip=x; 
	//y=2;
	//*p=4;
	printf("%d\n%d\n%d\n",*p,*x,y);
	printf("%u\n%u\n",&p,&x);
	printf("%d\n%d\n%d\n",*(x-1),&x,*(x+2));//(x+1)��p�h*(x+1)��p���� ==>�a�}��+1-1�A���e�{���O�ܼƪ��s��� 
	
	printf("%d\n%d\n%d\n",*(&x-1),x,(x+1));//x��y���a�},�ҥHx+1��x���Ъ��a�}!!! 
	return 0;
}
