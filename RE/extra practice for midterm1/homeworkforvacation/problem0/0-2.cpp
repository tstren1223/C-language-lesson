#include<stdio.h>
#include<conio.h>
void in(char c[],int*n,int a[10000],int *m){
	char t;
	
	for(int i=0;i<10000;i++){
		t=getche();
		if(t=='\r')
			break;
		else if(t=='-'){
			(*m)=0;
			(*n)--;
		}
		else
			c[(*n)]=t;
		(*n)++;
	}
	printf("\n");
	for(int i=0;i<(*n);i++)
		a[i]=c[i]-48;
}
void cau(int a[10000],int b[10000],int n1,int n2,int *n,int m1,int m2){//cau�i�H��X����Ȫ��̤j+-�̤p 
	int l=0,k=0;//l�B�z�i��᪺�Ӷ�,k�B�z�@�h�i�� 
	if(m1&&m2||!m1&&!m2){
		for(int i=0;i<n2;i++)
			a[n1-1-i]=a[n1-1-i]+b[n2-1-i];//�����ۥ[;
		for(int i=n1-1;i>=0;i--){//�B�z�i�� 
				a[i]+=k;
				l=a[i]%10;
				k=a[i]/10;
				a[i]=l;
		}
		(*n)=k;
	}
	else
	{
		for(int i=0;i<n2;i++)
			a[n1-1-i]=a[n1-1-i]-b[n2-1-i];//�����۴�;
		for(int i=n1-1;i>=0;i--){//�B�z�i�� 
			if(a[i]<0){
				a[i-1]--;
				a[i]+=10;
			}
		}
	} 
}
int main(){
	int a[10000]={0};
	int b[10000]={0};
	char c[10000];
	int n1,n2,m1,m2;//m for add or minus
	int cho;//��X�֤j��� 
	int n;//n�B�z�̤j�����i��
	do{
		n1=0,n2=0,n=0,m1=1,m2=1;
		in(c,&n1,a,&m1);
		in(c,&n2,b,&m2);
		if(n1>n2||(n1==n2&&a[0]>b[0]))
			cho=1;
		else if(n1<n2||(n1==n2&&b[0]>a[0]))
			cho==2;
		if(cho==1){
			cau(a,b,n1,n2,&n,m1,m2);
			if(!m1)
				printf("-");
			if(n)
				printf("%d",n);
			for(int i=0;i<n1;i++)
				printf("%d",a[i]);
			
		}
		else {
			cau(b,a,n2,n1,&n,m2,m1);
			if(!m2)
				printf("-");
			if(n)
				printf("%d",n);
			for(int i=0;i<n2;i++)
				printf("%d",b[i]);
		}
		printf("\n\n");
	}while(n1||n2);
		return 0;
	}
