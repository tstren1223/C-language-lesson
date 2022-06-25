#include<stdio.h>
int walk(int x,int y,int conx,int cony);
bool isHamming(int);

int main(){
	int x,y;
	printf("part1\n");
	while(scanf("%d%d",&x,&y)!=EOF){
		int count = walk(x,y,0,0);
		if(count==-1)
			printf("robot will shut down!\n");
		else
			printf("walk way:%d\n",count);
	}
	int k,ans;
	printf("part2\n");
	while(scanf("%d",&k)!=EOF&&k!=0){
		ans=0;
		while(k--)//次數 
			while(!isHamming(++ans));//當是hamming則跳出故只需做一個++ans的動作! 
		printf("%d\n",ans);
	}
	return 0;
}

bool isHamming(int n){
	if(n==1)
		return true;
	else
		return n%2==0&&isHamming(n/2)||n%3==0&&isHamming(n/3)||n%5==0&&isHamming(n/5);
}

int walk(int x,int y,int conx,int cony){
	if(x==0&&y==0)
		return 0;
	if(x==0){
		if(y>=3)
			return -1;
		return 1;
	}
	if(y==0){
		if(x>=3)
			return -1;
		return 1;
	}
	if(conx==2){
		int count=walk(x,y-1,0,cony+1);
		return (count==-1)?0:count;
	}
	else if(cony==2){
		int count = walk(x-1,y,conx+1,0);
		return (count==-1)?0:count;
	}
	else{
		int count1=walk(x,y-1,0,cony+1);
		int count2=walk(x-1,y,conx+1,0);
		count1=(count1==-1)?0:count1;
		count2=(count2==-1)?0:count2;
		return count1+count2;
	}
}
