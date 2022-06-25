#include<stdio.h>
int count=0;
void walk(int x1,int y1,int x2,int y2,int cox,int coy){
	if(x1!=x2&&cox!=2){
		walk(x1+1,y1,x2,y2,cox+1,0);
	}
	if(y1!=y2&&coy!=2){
		walk(x1,y1+1,x2,y2,0,coy+1);
	}
	if(y1==y2&&x1==x2){
		count++;
	}
}
bool isHamming(long long n){//非遞迴且較沒效率! 
		long long b=n;
		while(b%2==0)
			b/=2;
			
		while(b%3==0)
			b/=3;
			
		while(b%5==0)
			b/=5;
			
		if(b==1)
			return true;
		else
			return false;
	
}
int main(){
	int x,y;
	printf("part1\n");
	while(scanf("%d%d",&x,&y)!=EOF){
		walk(0,0,x,y,0,0);
		if(count)
			printf("walk way : %d\n",count);
		else
			printf("The robot will sut down!\n");
		count=0;
	}
	printf("part2\n");//此方法較沒效率 
	long long a;
	int b[10000]={0};
	long long nb=0;
	for(long long i=1;i<=10000;i++){
		if(isHamming(i)){
			b[nb]=i;
			nb++;
		}
	}
	//long long f[20]={1,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,36};
	/*while(scanf("%lld",&a)!=EOF){
		if(isHamming(a)){
			long long num=0;
			for(int i=1;i<=a;i++){
				if(isHamming(i))
					num++;
			}
			printf("%lld\n",num);
		}
		else
			printf("Not a hamming sequence number");
	}*/
	while(scanf("%lld",&a)!=EOF){
		printf("%d\n",b[a-1]);
	}
	return 0;
}
